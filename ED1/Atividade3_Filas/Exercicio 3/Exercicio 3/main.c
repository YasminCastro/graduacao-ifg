#include <stdio.h>
#include <stdlib.h>
#include "FilaDin.h"

void remove_reprovados(Fila* fi){
	
	Fila* fila_aux=cria_Fila();
	
	struct aluno al;
	
	while(!Fila_vazia(fi)){
		
		consulta_Fila(fi, &al);
		remove_Fila(fi);
		insere_Fila(fila_aux, al);
	}
	
	float media;
	while(!Fila_vazia(fila_aux)){
		consulta_Fila(fila_aux, &al);
		media=(al.n1 + al.n2 + al.n3) /3;
		
		if(media<=6)
			insere_Fila(fi,al);
		
			
		remove_Fila(fila_aux);
	}
		libera_Fila(fila_aux);
}

int main(){
    struct aluno a[7] = {{2,"Andre",2,2,2},
                         {4,"Ricardo",4,4,6},
                         {1,"Bianca",1,1,1},
                         {3,"Ana",8,7,9},
						 {5,"Elisa",7,9,7},
						 {9, "Pedro",7,1,2},
						 {8,"Carla",5,7,9}};
    
	Fila* fi = cria_Fila();
    int i;
    for(i=0; i < 7; i++){
        insere_Fila(fi,a[i]);        
    }

    imprime_Fila(fi);    
	
	printf("\n _____________________________________ \n");
	remove_reprovados(fi);
	printf("\n");
	
	imprime_Fila(fi);
	
    libera_Fila(fi);
    system("pause");
    return 0;
}


