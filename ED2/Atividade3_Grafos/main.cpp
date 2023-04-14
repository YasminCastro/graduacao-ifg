#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Grafos.h"

void InserirItensParaTeste(TipoGrafo* Grafo) {
	TipoRegistro a1 = {"Goiania", "Goianiense", "Iris Rezende"};
	adicionaVertice(Grafo, a1);
 	
 	TipoRegistro a2 = {"Aparecida de Goiania", "Aparecidense", "Gustavo Mendanha"};
	adicionaVertice(Grafo, a2);
	
	TipoRegistro a3 = {"Senador Canedo", "Canedense", "Divino Pereira"};
	adicionaVertice(Grafo, a3);
	
	TipoRegistro a4 = {"Anapolis", "Anapolino", "Roberto Naves"};
	adicionaVertice(Grafo, a4);	
	
	TipoRegistro a5 = {"Trindade", "Trindadense", "Janio Darrot"};
	adicionaVertice(Grafo, a5);
	
	TipoRegistro a6 = {"Hidrolandia", "Hidrolandense", "Paulo Sergio"};
	adicionaVertice(Grafo, a6);
	
	TipoRegistro a7 = {"Abadiania", "Abadiense", "Wilmar Arantes"};
	adicionaVertice(Grafo, a7);
	
	TipoRegistro a8 = {"Prof. Jamil", "Jamilense", "Geraldo Antonio"};
	adicionaVertice(Grafo, a8);
	
	TipoRegistro a9 = {"Corumba", "Corumbaense", "Ruiter Cunha"};
	adicionaVertice(Grafo, a9);
		 	
	adicionarAresta(Grafo, 0, 1);	 	
	adicionarAresta(Grafo, 0, 2);
	adicionarAresta(Grafo, 0, 3);
	adicionarAresta(Grafo, 0, 4);
	adicionarAresta(Grafo, 1, 5);
	adicionarAresta(Grafo, 3, 6);
	adicionarAresta(Grafo, 5, 7);
	adicionarAresta(Grafo, 6, 8);	
}

int main(int argc, char *argv[]) {
	
	TipoGrafo Grafo;	 
	InicializaGrafo(&Grafo);
	
	InserirItensParaTeste(&Grafo);	
		 	
 	ListaGrafo(&Grafo);
 	
 	BuscaEmProfundidade(&Grafo);
	return 0;
}

