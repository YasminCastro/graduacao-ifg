//Ler 5 números, armazenando-os no vetor X[5]. Calcular a soma destes 5 números e mostrá-la na tela. 

#include <stdio.h>

int main(){

  int i, j=1;
  double soma=0;
  double x[5];

  for(i=0;i<5;i++){

    printf("Digite o %d numero:\n",j++);
    scanf("%lf", &x[i]);
    soma += x[i];
  }
  
  printf("A soma dos numeros eh: %0.2lf \n", soma);


  return (0);

}
