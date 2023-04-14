//Escreva um programa que leia um conjunto de N números inteiros não nulos e mostre qual foi o maior e o menor valor fornecido. Use o valor zero para encerrar o programa. 

#include <stdio.h>

int main(){

int numero = 1;
int maior = 0;
int menor= 0;

do{
  printf("Digite um numero ou digite 0 para encerrar.\n");
  scanf("%d", &numero);
  
  if(numero > maior){
    maior = numero;

  }
  if (menor == 0 ){
    menor = numero;
    
  }
 if ( numero < menor && numero !=0){
   
  menor = numero;
 }
}

while(numero != 0);
  printf("O maior numero e: %d. \n", maior);
  printf("O menor numero e: %d. \n", menor);
 
return (0);
}
