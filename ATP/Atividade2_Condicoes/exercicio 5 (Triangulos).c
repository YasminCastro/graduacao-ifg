//aça um programa em que dados 3 valores A, B, C, verificar se eles podem ser os comprimentos dos lados de um triângulo e, se forem, verificar se compõem um triângulo equilátero, isósceles ou escaleno. 
//Também informar se não compuserem nenhum triângulo.
#include <stdio.h>

main(){
	
	float a,b,c;
	
	printf("Insira o 1 lado do triangulo: \n");
	scanf("%f",&a);
	printf("Insira o 2 lado do triangulo: \n");
	scanf("%f",&b);
	printf("Insira o 3 lado do triangulo: \n");
	scanf("%f",&c);
	
	if(a <= 0 || b <= 0 || c <= 0){
		printf("Lados negativos nao sao aceitos.\n");
	
	}
	
	else if(a<b+c || b<c+a || c<a+b){
		printf("Nao e um triangulo.\n");
	
	}
	
	else if (a != b && b != c && c!=a){
		printf("Triangulo Escaleno. \n");
		
	}
	
	else if (a==b && b==c && c==a){
		printf("Triangulo Equilatero.\n");
		
	}
	
	else if (a==b || b==c || c==a){
		printf("Triangulo Isosceles.\n");
		
	}
	
	system ("PAUSE");
}
