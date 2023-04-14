//Sendo h= 1 + ½ + 1/3 + ¼ + ... + 1/N, prepare um algoritmo para calcular o número h, sendo o número N fornecido pelo usuário.

#include <stdio.h>

int main(){

float h=1;
float i,n;

printf("Digite o numero:\n");
scanf("%f",&n);

for(i=2; i <= n; i++){

  h += (1/i);
}

printf("O resultado e: %0.2f \n", h);

return(0);


}
