//Calculare listar todos os múltiplos positivos do número 7 menores ou iguais a 100.

#include <stdio.h>

int main(){

  int n;
  int t;

  for(n=0; n<=100; n++){
     
    t = n % 7;

    if(t == 0)

    printf("%d \n", n);
  }

  return (0);
}
