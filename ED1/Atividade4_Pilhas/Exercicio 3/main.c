#include <stdio.h>
#include <stdlib.h>
#include "PilhaDin.h"
int main(){
	
	
    char texto[100] = "Instituto Federal de Goias";
    
    printf("\n %s", texto);
    
	Pilha* pi = cria_Pilha();
	
	int i=0;
	while(texto[i] != '\0'){
		struct item itemC;
		itemC.c = texto [i];
		insere_Pilha(pi, itemC);
		i++;
		
	}
	
	struct item itemA;
	i = 0;
	while(!Pilha_vazia(pi)){
		consulta_topo_Pilha(pi, &itemA);
		remove_Pilha(pi);
		texto[i] = itemA.c;
		i++;
		
	}
	
	
	printf("\n %s \n", texto);
	imprime_Pilha(pi);
	
	
	
    system("pause");
    return 0;
}

