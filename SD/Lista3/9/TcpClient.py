import socket
import time

server_address = "127.0.0.1"
server_port = 20001
buffer_size = 1024

message_number = int(input("Digite o número de mensagens que deseja enviar: "))

tcp_client_socket = socket.socket(family=socket.AF_INET, type=socket.SOCK_STREAM)
tcp_client_socket.connect((server_address, server_port))

for i in range(message_number):
    base_message = input("Forneça a mensagem: ")
    message = base_message + str(i + 1)
    bytes_to_send = str.encode(message)

    tcp_client_socket.send(bytes_to_send)

    bytes_from_server = tcp_client_socket.recv(buffer_size)
    msg_from_server = bytes_from_server.decode()

    print("Mensagem do servidor: {}".format(msg_from_server))

    time.sleep(1)

tcp_client_socket.close()