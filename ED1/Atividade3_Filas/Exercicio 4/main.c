#include <stdio.h>
#include <stdlib.h>
#include "FilaDin.h"

Fila* intercala(Fila* f1, Fila* f2){
	
	Fila* nova_fila = cria_Fila();
	struct aluno al;
	
	while ((!Fila_vazia(f1)) ||  (!Fila_vazia(f2))){
		
		if(!Fila_vazia(f1)){
			consulta_Fila(f1, &al);
			insere_Fila(nova_fila, al);
			remove_Fila(f1);
		}
		
			consulta_Fila(f2, &al);
			insere_Fila(nova_fila, al);
			remove_Fila(f2);
		}
		
	}
	return nova_fila;
}

int main(){
    struct aluno a[7] = {{2,"Andre",2,2,2},
                         {4,"Ricardo",4,4,6},
                         {1,"Bianca",1,1,1},
                         {3,"Ana",8,7,9},
						 {5,"Elisa",7,9,7},
						 {9, "Pedro",7,1,2},
						 {8,"Carla",5,7,9}
						 };
						 
	struct aluno b[4] = {{2,"Pedro",2,2,2},
                         {4,"Amanda",4,4,6},
                         {1,"Cleo",1,1,1},
                         {3,"Kris",8,7,9},
						 };
    
     printf("\n Fila 1 \n");
	Fila* f1 = cria_Fila();
    int i;
    for(i=0; i < 7; i++){
        insere_Fila(f1,a[i]);        
    }

    imprime_Fila(f1);    
	
	printf("\n Fila 2 \n");
	Fila* f2 = cria_Fila();
    
    for(i=0; i < 4; i++){
        insere_Fila(f2,b[i]);        
    }

    imprime_Fila(f2);
    
    printf("\n Intercalando \n");
	
	Fila* nova_fila = intercala(f1, f2);	
	imprime_fila(nova_Fila);
	
    libera_Fila(f1);
    system("pause");
    return 0;
}


