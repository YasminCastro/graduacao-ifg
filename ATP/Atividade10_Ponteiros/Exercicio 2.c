//Faça um programa que inverta a ordem dos elementos de um vetor de 10 casas, interpretando-o como um ponteiro.
//Copiado

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
 
    for(i = 10; i >= 1; i--){
        printf("Vetor inverso [%d] \n", vet[i]);
    }
 
    free(vet);
    vet = NULL;
 
    return 0;
}
 
