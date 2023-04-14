//Modifique o problema anterior de forma a fazer a ordenação em um vetor de três casas ao invés de 3 variáveis. Continue realizando a ordenação c/ a manipulação de ponteiros.
//copiado

#include <stdio.h>
 
 
void invet(int *vet){
    int i, j;
    int aux;
    for(i = 1; i < 4; i++){
        for(j = i+1; j < 4; j++){
            if(vet[i] < vet[j]){
                aux = vet[j];
                vet[j] = vet[i];
                vet[i] = aux;
            }
        }
    }
}
 
int main(){
    int i,j;
    int *vet;
    vet = (int)malloc(3*sizeof(int));
    printf("informe 3 valores:\n");
    for(i = 1; i < 4; i++){
        printf("Digite o %d valor: ", i);
        scanf("%d", &vet[i]);
    }
 
    invet(vet);
 
    for(i = 1; i < 4; i++){
        printf("Vetor [%d] \n", vet[i]);
    }
 
    free(vet);
    vet = NULL;
 
    return 0;
}
