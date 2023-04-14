// Elaborar um programa que leia uma matriz A de dimensão 5 x 7 de inteiros. Verifique qual é seu maior elemento e imprima-o juntamente com sua posição na matriz (linha e coluna).
#include <stdio.h>

int main(){

  int mtz[5][7];
  int l,c;
  int i,j;
  int maior;

  printf("Digite os valores desejados, separados por enter \n");

  for(l=0;l<5;l++){
    for(c=0;c<7;c++){
      scanf("%d", &mtz[l][c]);
    }
  }

  for(l=0;l<5;l++){
    for(c=0;c<7;c++){
      if (maior < mtz[l][c]){
        maior = mtz[l][c];
        i = l;
        j = c;
      }
    }
  }

  printf ("O maior numero e %d \n O numero se encontra na posiÃ§Ã£o %d %d da matriz ",maior,i,j);

  return (0);
}
