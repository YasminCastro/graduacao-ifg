//Escreva um programa que receba o sal�rio atual e o c�digo correspondente ao cargode um funcion�rio e imprima seu cargo e o sal�rio c/ percentual de aumento ao qual estefuncion�rio tem direito
#include <stdio.h>
#include <math.h>

main(){
	
	int codigo; 
	float salario, aumento, final;
	
	printf("Insira aqui seu salario atual:");
	scanf("%f", &salario);
	printf("Insira o codigo do seu cargo:");
	scanf("%d", &codigo);
	
	
	switch(codigo){
		
		case 1 :
		    aumento = (salario * 0.5);
		    final = (salario + aumento);
			printf("Escriturario voce tem direito a 50 porcento de aumento. \n");
			printf("Seu salario sera de %0.2f . \n", final);break;
			
		case 2 :
		    aumento = (salario * 0.35);
		    final = (salario + aumento);
			printf("Secretario voce tem direito a 35 porcento de aumento. \n");
			printf("Seu salario sera de %0.2f . \n", final);break;
			 
		case 3 :
			aumento = (salario * 0.2);
			final = (salario + aumento);
			printf("Caixa voce tem direito a 20 porcento de aumento. \n");
			printf ("Seu salario sera de %0.2f . \n", final);break;
		
		case 4 :
			aumento = (salario * 0.1);
			final = (salario + aumento);
			printf("Gerente voce tem direitoa 10 porcento de aumento. \n");
			printf("Seu salario sera de %0.2f . \n", final);break;
			
		case 5 :
			printf("Diretor voce nao tem aumento. \n");break;
			
		default : 
		printf("Codigo invalido.\n");
	}
	
	return 0;
	
	
	
	
  }
