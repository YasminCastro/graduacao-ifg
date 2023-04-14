//Fulano tem 1,50 metro e cresce 2 centímetros por ano, enquanto Ciclano tem 1,10 e cresce tem 3 centímetros por ano.
// Construa um programa que calcule e imprima quantos anos serão necessários para que Ciclano seja maior que Fulano.
#include <stdio.h>

int main (){
	
	float f = 1.50;  // F = fulado
	float c = 1.10; //c= Ciclano
	int ano = 1;

	
	while(c<f){
		f += 0.02;
		c += 0.03;
		ano ++;
		
		if(c>f){
			
			printf("No ano %d Ciclado sera mais alto com %0.2f e Fulando com %0.2f . \n", ano, c,f);
		}
		
		
	}
	
	return (0);
	
}
