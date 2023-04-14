//Escreva um programa que receba do usuário uma matriz 4x2 de reais. Determine e exiba a média dos valores de cada linha da matriz.
#include <stdio.h>

int main(){
  int mtz[4][2];
  int l,c;
  int media=0;

  printf("Digite os valores desejados, separados por enter\n");

  for(l=0;l<=3;l++){
    for(c=0;c<=1;c++){
      scanf("%d", &mtz[l][c]);
    }
  }

  for(l=0;l<=3;l++){
    for(c=0;c<=1;c++){
      media += mtz[l][c];
    }
    media = media/2;
    printf("A media e %d \n", media);
  }

  return(0);


}
