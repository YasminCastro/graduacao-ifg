//Escreva um programa que faça a ordenação de três variáveis inteiras quaisquer em ordem decrescente usando ponteiros.
//copiado

#include <stdio.h>
 
int main(){
    int i,j;
    int aux;
    int *vet;
    vet = (int)malloc(3*sizeof(int));
    printf("informe 3 valores:\n");
    for(i = 1; i < 4; i++){
        printf("Digite o %d valor: ", i);
        scanf("%d", &vet[i]);
    }
 
    for(i = 1; i < 4; i++){
        for(j = i+1; j < 4; j++){
            if(vet[i] < vet[j]){
                aux = vet[j];
                vet[j] = vet[i];
                vet[i] = aux;
            }
        }
    }
 
 
    for(i = 1; i < 4; i++){
        printf("Vetor [%d] \n", vet[i]);
    }
 
    free(vet);
    vet = NULL;
 
    return 0;
}
