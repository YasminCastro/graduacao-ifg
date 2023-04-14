//Gerar um vetor com 10 números da seguinte forma: cada número guardado no vetor será o valor da sua própria posição no vetor (seu índice) menos 2 (ou seja, Xi = i-2). Mostrar na tela este vetor.

#include <stdio.h>

int main(){

  int i;
  double v[10];

  for(i=0;i<10;i++){
    v[i] = i - 2;
    printf("%.2lf \n", v[i]);
  }
  
  return (0);

}
