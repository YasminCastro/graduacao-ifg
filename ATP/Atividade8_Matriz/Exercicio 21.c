//Escreva  um  programa  que  receba  do  usuário  uma  matriz  2x3  de  inteiros  e calcule a soma de todos os seus termos.
#include <stdio.h>

int main(){
  int mtz[2][3];
  int l,c,total;

  printf("Digite os valores desejados, separados por enter\n");

  for(l=0; l<=1; l++){
    for(c=0; c<=2; c++){
      scanf("%d", &mtz [l][c]);
      total += mtz[l][c];
    }
  }
  printf ("%d\n", total);

  return(0);

}
