//Construa uma funcao que verifique se um numero inteiro, passado como parametro, eh par, retornando 1 se for verdadeiro
//e 0 se for falso. Demonstre o uso dessa funcao pela funcao main.

//Copiado

#include <stdio.h>


int numPar(num) {
  int resp;

  if (num % 2 == 0) {
    resp = 1;
  } else {
    resp = 0;
  }

  return resp;
}

int main() {
  int num, par;

  printf("Esse programa verifica se um numero eh par.");

  printf("\nDigite um numero: ");
  scanf("%d", &num);

  par = numPar(num);

  if (par == 1) {
    printf("O numero eh par.");
  } else {
    printf("O numero nao eh par.");
  }

  return 0;
}
