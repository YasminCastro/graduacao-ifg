//Gerar um vetor com 10 n�meros da seguinte forma: cada n�mero guardado no vetor ser� o valor da sua pr�pria posi��o no vetor (seu �ndice) menos 2 (ou seja, Xi = i-2). Mostrar na tela este vetor.

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
