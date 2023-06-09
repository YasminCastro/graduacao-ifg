#include <stdio.h>
#include "Grafos.h"

void InicializaPilha (TipoPilha *Pilha) {   
  Pilha->n = 0;
}

void ImprimeTituloVertice() {
	printf("%-3s %-25s %-18s %-18s %-5s\n", "#","CIDADE", "GENTILICO", "PREFEITO", "VISITADO?");
}

void ImprimeVertice(TipoVertice *v){
	printf("%-3d %-25s %-18s %-18s %-5d\n",v->Ordem, v->Item.Cidade, v->Item.Gentilico, v->Item.Prefeito, v->FoiVisitado); 
}

void ListaPilha(TipoPilha* Pilha) {
	ImprimeTituloVertice();
	for(int i = Pilha->n-1; i >=0; i--) {
	    ImprimeVertice(&(Pilha->Reg[i]));		
	}
}

int PilhaVazia(TipoPilha* Pilha) {
	if (Pilha->n > 0) 
		return 0;
	else return 1;	
}

void Empilha(TipoPilha* Pilha, TipoVertice* v) {
	Pilha->Reg[Pilha->n] = *v;	
	Pilha->n++;	
}

TipoVertice* Desempilha(TipoPilha* Pilha) {
	TipoVertice* reg = NULL;
	if (Pilha->n > 0) {
		Pilha->n--;
		reg = &Pilha->Reg[Pilha->n];
	}
	return reg;
}

TipoVertice* VerTopo(TipoPilha* Pilha) {
	TipoVertice* reg = NULL;
	if (Pilha->n > 0) {
		reg = &Pilha->Reg[Pilha->n-1];
	}
	return reg;
}

void InicializaGrafo (TipoGrafo *Grafo) {   
  InicializaPilha(&(Grafo->Pilha));
  Grafo->n = 0;  
  
	for(int i=0; i<MAX_VERT; i++) {
		for(int j=0; j<MAX_VERT; j++) {
			Grafo->MatrizAdj[i][j] = 0;
		}
	}	  
}

void adicionaVertice(TipoGrafo *Grafo, TipoRegistro Reg) {
	
	TipoVertice v;
	v.Ordem = Grafo->n;
	v.Item = Reg;
	v.FoiVisitado = 0;
	
	Grafo->ListaVertices[Grafo->n] = v;
	Grafo->n++;
}

void ListaGrafo(TipoGrafo* Grafo) {
	
	printf("\nGRAFO\n");	
	ImprimeTituloVertice();
	for(int i=0; i < Grafo->n; i++) {
	    ImprimeVertice(&(Grafo->ListaVertices[i]));
	}
	printf("----------------------------------------------------------------------------\n");
	
	printf("%-3s", "");
	for(int i=0; i<Grafo->n; i++) {
		printf("%-3d", Grafo->ListaVertices[i].Ordem);
	}
	printf("\n");
	
	for(int i=0; i<Grafo->n; i++) {
		printf("%-3d", Grafo->ListaVertices[i].Ordem);
		for(int j=0; j<Grafo->n; j++) {
			printf("%-3d", Grafo->MatrizAdj[i][j]);
		}
		printf("\n");
	}
	
}

void adicionarAresta(TipoGrafo* Grafo, int inicio, int fim) {
	Grafo->MatrizAdj[inicio][fim] = 1;
	Grafo->MatrizAdj[fim][inicio] = 1;
}

TipoVertice* AdjNaoVisitado(TipoGrafo* Grafo, TipoVertice* v) {

	for(int j=0; j<Grafo->n; j++) {
		if ( (Grafo->MatrizAdj[v->Ordem][j] == 1) && (Grafo->ListaVertices[j].FoiVisitado == 0) ) {
			return &(Grafo->ListaVertices[j]);
		}
	}
	
	return NULL;
}

void ZerarFlagsVisitado(TipoGrafo* Grafo) {
	for(int j=0; j<Grafo->n; j++) {
		Grafo->ListaVertices[j].FoiVisitado = 0;		
	}
}

void BuscaEmProfundidade(TipoGrafo* Grafo) {

	printf("\nDFS\n");
	TipoVertice* vInicio = &(Grafo->ListaVertices[0]);
	vInicio->FoiVisitado = 1;
	ImprimeVertice(vInicio);
	Empilha(&(Grafo->Pilha), vInicio);
		
	while(!PilhaVazia(&(Grafo->Pilha))) {
		
		TipoVertice *topo = VerTopo(&(Grafo->Pilha));			
		TipoVertice *v = AdjNaoVisitado(Grafo, topo);
		
		 if (v == NULL) {
		 	Desempilha(&(Grafo->Pilha));
		 } else {
		 	v->FoiVisitado = 1;
		 	ImprimeVertice(v);
		 	Empilha(&(Grafo->Pilha), v);
		 }		
	}

	ZerarFlagsVisitado(Grafo);
	 
}
