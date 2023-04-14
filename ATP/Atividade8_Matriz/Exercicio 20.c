// Faça um programa que leia uma matriz 4x3 do usuário e imprima ela na tela no formato de matriz.
#include <stdio.h>

int main(){
  int mtz[4][3];
  int linha, coluna;

  printf("Digite os valores para preencher uma matriz de dimensao 3x4 \n");
  printf("Digite cada valor separado por enter \n");

  for (linha=0; linha<=3; linha++){
    for(coluna=0; coluna<=2; coluna++){
      scanf("%d", &mtz [linha][coluna]);

    }


  }

  for(linha=0;linha <=3; linha++){
    for(coluna=0; coluna<=2; coluna++){

      printf("%d\n",mtz[linha][coluna]);

    }
  }
  return (0);
}
