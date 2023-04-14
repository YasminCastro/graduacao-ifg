#include <stdio.h>
#include <stdlib.h>
#include "PilhaDin.h"

void copia_Pilha(Pilha* p1, Pilha* p2){
	
	struct aluno al;
	
	Pilha* aux= cria_Pilha();
	
	while(!Pilha_vazia(p1)){
		consulta_topo_Pilha(p1, &al);
		remove_Pilha(p1);
		insere_Pilha(aux, al);
		
	}
	
	while(!Pilha_vazia(aux)){
		consulta_topo_Pilha(aux, &al);
		remove_Pilha(aux);
		insere_Pilha(p1, al);
		insere_Pilha(p2, al);
	}
	libera_Pilha(aux);
}


int main(){
    struct aluno a[4] = {{2,"Andre",9.5,7.8,8.5},
                         {4,"Ricardo",7.5,8.7,6.8},
                         {1,"Bianca",9.7,6.7,8.4},
                         {3,"Ana",5.7,6.1,7.4}};
    
	Pilha* pi = cria_Pilha();
    
    int i;
    for(i=0; i < 4; i++)
        insere_Pilha(pi,a[i]);
        
        
	printf("\n Pilha original \n");	 
    imprime_Pilha(pi);
    
    Pilha* pNova = cria_Pilha();
    copia_Pilha(pi, pNova);
    
    printf("\n Pilha Nova \n");	 
    imprime_Pilha(pNova);
    
    
    libera_Pilha(pi);
    system("pause");
    return 0;
}

