//Fa�a um programa que apresente na tela a tabela de convers�o de graus Celsius para Fahrenheit, de -100�C at� +100 �C , variando de 10 �C em 10�C.
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
