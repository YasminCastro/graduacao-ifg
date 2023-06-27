import socket

server_address   = "127.0.0.1"
server_port      = 20001
buffer_size      = 1024

message_number = 20
base_message = "Mensagem de teste "

# Cria um socket UDP
udp_client_socket = socket.socket(family=socket.AF_INET, type=socket.SOCK_DGRAM)

for i in range(message_number):
    message = base_message + str ( i + 1)
    bytes_to_send  = str.encode(message)

    # Envia requisição ao servidor
    udp_client_socket.sendto(bytes_to_send, (server_address, server_port))

    # Recebe resposta do servidor
    msg_from_server = udp_client_socket.recvfrom(buffer_size)

    msg = "Mensagem do servidor: {}".format(msg_from_server[0])
    print(msg)
