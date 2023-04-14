//Faça um programa que apresente na tela a tabela de conversão de graus Celsius para Fahrenheit, de -100ºC até +100 ºC , variando de 10 ºC em 10ºC.
#include <stdio.h>

int main (){
	int c = -100; //c = Celsius
	int f;        // f = fahrenheit
	
	while(c<101){
		
	 f = (c*9)/5+32;
	 printf ("%d Celsius e igual %d Fahrenheit \n.", c, f);
	 c = c + 10;
	 
	}
	
	return (0);
	 
}
