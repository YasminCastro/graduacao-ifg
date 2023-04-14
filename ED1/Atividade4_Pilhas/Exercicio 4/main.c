#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "PilhaDin.h"

int verifica(char* texto){
	
	Pilha* pi = cria_Pilha();
	struct item itemA;
	
	int i=0;
	while(texto[i] != '\0'){
		
		struct item itemC;
		itemC.c = texto [i];
		
		if(itemC.c=='(' || itemC.c == '[')
			insere_Pilha(pi,itemC);
		else{
			if(Pilha_vazia(pi))
				break;
				
			consulta_topo_Pilha(pi, &itemA);
			remove_Pilha(pi);
			
		if ((itemC.c =='(' && itemA.c != '(') ||
		(itemC.c==']' && itemA.c != '['))
			break;
			
		
		}
		
		i++;
	}
	
	//imprime_Pilha(pi);	
	
	
	int retorno = ((strlen(texto) == i) && (Pilha_vazia(pi)) );
	
	libera_Pilha(pi);
	
	return retorno;
}
int main(){
   
	char texto[100] = "(()[()()]}";
   	
	if(verifica(texto))
		printf("\nOK\n");
	else 
		printf("\n ERRO \n");
    system("pause");
    return 0;
}

