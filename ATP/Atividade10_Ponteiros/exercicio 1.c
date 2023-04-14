 //Escreva um programa que faça a impressão dos valores de um vetor de 10 casas interpretando-o como um ponteiro.
//copiado

#include <stdio.h>
 
int main(){
    int i;
    int *vet;
    vet = (int)malloc(10*sizeof(int));
    printf("informe 10 valores:\n");
    for(i = 1; i < 11; i++){
        printf("Digite o %d valor: ", i);
        scanf("%d", &vet[i]);
    }
 
    for(i = 1; i < 11; i++){
        printf("Vetor digitado [%d] \n", vet[i]);
    }
 
    free(vet);
    vet = NULL;
 
    return 0;
}
