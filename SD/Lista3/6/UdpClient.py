import socket

server_address   = "127.0.0.1"
server_port      = 20001
buffer_size      = 1024
timeout = 5

message_number = int(input("Digite o número de mensagens que deseja enviar: "))

# Cria um socket UDP
udp_client_socket = socket.socket(family=socket.AF_INET, type=socket.SOCK_DGRAM)


for i in range(message_number):
    base_message = input("Forneça a mensagem: ")
    message = base_message + str ( i + 1)
    bytes_to_send  = str.encode(message)

    # Envia requisição ao servidor
    udp_client_socket.sendto(bytes_to_send, (server_address, server_port))

    # Esperando timeout para receber a resposta
    udp_client_socket.settimeout(timeout)

    try:
        msg_from_server = udp_client_socket.recvfrom(buffer_size)
        msg = "Mensagem do servidor: {}".format(msg_from_server[0])
        print(msg)

    except udp_client_socket.timeout:
        print("Timeout para aguardar resposta da mensagem" + i+1 + msg_from_client)

