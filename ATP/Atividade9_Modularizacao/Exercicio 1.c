//Escreva um programa que modularize a solucao do problema dos triangulos. Defina uma funcao para verificar se tres lados formam 
//ou nao um triangulo equilatero, isoscels ou escaleno. Demonstre o uso das funcoes com um programa que possibilite o usuario fazer
//quantas verificacoes ele deseje ate encerrar, digitando como comando de saida -1.

#include <stdio.h>

int triangulo(int a, int b, int c){
  int resp;

  if( a<=0 && b<=0 && c<=0){
    resp=0;
  }else if( a<b+c && b<c+a && c<a+b){
    resp=1;
  }else{
    resp=0;
  }
  return resp;
}

int tipo(int a, int b, int c){
  int volta;

  if( a!=b && b!=c && c!=a){
    volta=1;
  
  }else if(a==b && b==c && c==a){
    volta=2;

  }else if(a==b || b==c || c==a){
    volta=3;

  }  
  return volta;
}

int main(){
  int a,b,c;
  int t,u;

  do{
  printf("Se desejar encerrar o programa digite -1.\n");
  printf("\nInsira o 1 lado do triangulo: \n");
	scanf("%d",&a);
	printf("Insira o 2 lado do triangulo: \n");
	scanf("%d",&b);
	printf("Insira o 3 lado do triangulo: \n");
	scanf("%d",&c);


    if(a != -1 && b != -1 && c != -1){

      t = triangulo(a, b, c);

      if(t==1){
      printf("O triangulo e valido.\n");
      u = tipo(a, b, c);
      }

      if(u==1){
      printf("Eh um triangulo escanelo.\n");
  
      }else if(u==2){
      printf("Eh um triangulo equilatero.\n");

      }else if(u==3){
      printf("Eh um triangulo Isoceles.\n");
      }
    }

  } while (a != -1 && b != -1 && c != -1);

  return 0;
}
