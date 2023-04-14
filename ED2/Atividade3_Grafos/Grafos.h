#define MAX_VERT 20

typedef struct {
	char Cidade[30];	
	char Gentilico[20];  
	char Prefeito[20];  
} TipoRegistro;

typedef struct {
	int Ordem; 
	TipoRegistro Item;
	int FoiVisitado;
} TipoVertice;

typedef struct {
	TipoVertice Reg[50];    
	int n;
} TipoPilha;

typedef struct {
	TipoVertice ListaVertices[MAX_VERT];   
	int MatrizAdj[MAX_VERT][MAX_VERT];
	TipoPilha Pilha;
	int n;
} TipoGrafo;

void InicializaGrafo (TipoGrafo *Grafo);  
void adicionaVertice(TipoGrafo *Grafo, TipoRegistro Reg);
void ListaGrafo(TipoGrafo* Grafo);
void adicionarAresta(TipoGrafo* Grafo, int inicio, int fim);
TipoVertice* AdjNaoVisitado(TipoGrafo* Grafo, TipoVertice* v);
void BuscaEmProfundidade(TipoGrafo* Grafo);
