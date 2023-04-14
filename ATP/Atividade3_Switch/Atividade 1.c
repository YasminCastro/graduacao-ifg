//Escreva um programa que, tendo como dados de entrada o preço de um produto e seucódigo de origem, mostre o preço junto de sua procedência. 
//Caso o código não sejanenhum dos especificados, o produto deve ser encarado como importado.
#include <stdio.h>


main(){
	
	int origem,valor;
	
	printf("Insira o valor do produto:");
	scanf("%d", &valor);
	printf("Insira o codigo de procedencia:");
	scanf("%d", &origem);
	
	if(origem == 5 || origem == 6){
		origem = 5;
	}
	if (origem == 7 || origem == 8 || origem == 9){
		origem =  6;
	}
	if (origem >= 10 && origem <= 20){
		origem = 7;
	}
	if (origem >= 25 && origem <=30){
		origem = 8;
	}
	
	switch(origem){
		case 1 :
		 printf("Valor do produto: %d \n", valor); 
		 printf("Procedencida do produto: Sul.\n");break;
		
		case 2 :
		 printf("Valor do produto: %d \n", valor); 	
		 printf("Procedencida do produto: Norte.\n");break;
		
		case 3 : 
		 printf("Valor do produto: %d \n", valor); 
		 printf("Procedencida do produto: Leste.\n");break;
		
		case 4 :
		 printf("Valor do produto: %d \n", valor); 
	     printf("Procedencida do produto: Oeste.\n");break;
	     
		case 5 : 
		 printf("Valor do produto: %d \n", valor); 
		 printf("Procedencida do produto: Nordeste.\n");break;
		 
		case 6 :
		 printf("Valor do produto: %d \n", valor); 	
		 printf("Procedencida do produto: Sudeste.\n");break;
		 
		case 7 : 
		 printf("Valor do produto: %d \n", valor); 
		 printf("Procedencia do produto: Centro-Oeste.\n");break;
		 
		case 8 : 
		 printf("Valor do produto: %d \n", valor); 
		 printf("Procedencia do produto: Nordeste.\n");break;
		
		
		default: printf ("O produto e importado.\n");
		
	}
	
	
	system ("PAUSE");
}

