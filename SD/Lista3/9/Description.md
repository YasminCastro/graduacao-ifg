import socket
import datetime
import threading

servidor_IP = "127.0.0.1"
servidor_porta = 20001
tamanho_buffer = 1024
arquivo_backup = "backup.txt"

socket_servidor_tcp = socket.socket(family=socket.AF_INET, type=socket.SOCK_STREAM)
socket_servidor_tcp.bind((servidor_IP, servidor_porta))
print("Servidor TCP funcionando e esperando conexões")

def backup_mensagem(mensagem):
    with open(arquivo_backup, "a") as f:
        agora = datetime.datetime.now()
        hora = agora.strftime("%d/%m/%Y %H:%M:%S")
        f.write("{} - {}\n".format(hora, mensagem.decode()))

def tratar_conexao(socket_cliente, endereco_cliente):
    while True:
        mensagem = socket_cliente.recv(tamanho_buffer)

        if not mensagem:
            break

        backup_mensagem(mensagem)

        resposta = "Mensagem salva com sucesso!"
        bytes_resposta = str.encode(resposta)
        socket_cliente.send(bytes_resposta)

    socket_cliente.close()

while True:
    socket_servidor_tcp.listen()
    socket_cliente, endereco_cliente = socket_servidor_tcp.accept()
    thread_cliente = threading.Thread(target=tratar_conexao, args=(socket_cliente, endereco_cliente))
    thread_cliente.start()