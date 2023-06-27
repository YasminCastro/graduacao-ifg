import socket
import datetime

servidor_IP     = "127.0.0.1"
servidor_porta  = 20001
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

while(True):
    socket_servidor_tcp.listen()

    socket_cliente, endereco = socket_servidor_tcp.accept()
    cliente_IP = "IP do cliente: {}".format(endereco)

    print(cliente_IP)

    mensagem = socket_cliente.recv(tamanho_buffer)

    backup_mensagem(mensagem)

    resposta = "Mensagem salva com sucesso!"
    bytes_resposta = str.encode(resposta)
    socket_cliente.send(bytes_resposta)

    print("Mensagem salva com sucesso!")
    print('\n')