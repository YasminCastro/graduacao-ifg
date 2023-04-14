//Programa que modularize o calculo das raizes de uma funcao do segundo grau.
//Faca uma funcao so para caulcar delta, uma para calcular x1 e outra para x2. Demonstre o uso das funcoes.

//incabadooo

#include <stdio.h>
#include <math.h>

int delta(float a, float b, float c, float total){
  int del;

  total=b*b-4*a*c;
  if(total>0){
    return=1
  }
  
  return del;
}

int x1(float a, float b, float c, float total1){
  int bask;

  total1 = (-b + (sqrt(total1))/(2*a));

  return bask;
}

int x2(float a, float b, float c, float total2){
  int bask2;

  total2 = (-b - (sqrt(total2))/(2*a));

  return bask2;
}

int main(){
  float a,b,c;
  int d,e,f;


  printf("Insira o termo a:\n");
  scanf("%f",&a);
  printf("Insira o termo b:\n");
  scanf("%f",&b);
  printf("Insira o termo c:\n");
  scanf("%f",&c);

  
  d = delta(a,b,c,total);
  if(d==1)
  e = x1(a,b,c,total1);
  f = x2(a,b,c,total2);

  printf("")
  return 0;
}
