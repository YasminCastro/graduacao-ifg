// Dada duas seq��ncias de 5 n�meros, calcule a soma de cada n�mero com o seu correspondente.

#include <stdio.h>

int main(){

  int i;
  double total;
  double v[5]={10,20,30,40,50};
  double y[5]={10,20,30,40,50};

  for(i=0;i<5;i++){

    total = v[i] + y[i];
    printf("A soma eh: %0.2lf \n", total);

  }

 return(0);
}
