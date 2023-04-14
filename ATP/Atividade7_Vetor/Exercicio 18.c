//Ler 5 números, armazenando-os no vetor X[5]. Copiar este vetor, de trás para frente (na ordem inversa de leitura), em um segundo vetor Y[5]. Mostrar o vetor Y. 
#include <stdio.h>

int main(){

  int a,b, j=1;
  double x[5], y[5];

  for(a=0;a<5;a++){

    printf("Digite o %d numero.\n",j++);
    scanf("%lf", &x[a]);
    }

  for(b=0;b<5;b++){
    a--;
    y[b] = x[a];
    printf("%.2lf \n", y[b]);
  }

 return (0);

}
