//a. Construa um programa que converta uma temperatura dada em graus Celsius para Farenheith:Farenheit = (9/5)*(Celsius) + 32
//b. Modifique o programa de forma que o usuário possa escolher se deseja converter de Celsius ? Farenheit (opção 1) ou de Farenheit ? Celsius (opção 2) antes de fornecer o valor da temperatura a ser convertida. 

#include <stdio.h>

main(){
	
	float c,f; //C são celsius, F são farenheit
	int escolha;
	
	printf("Escolha a conversao desejada:\n");
	printf("1.Celsius para Farenheit. \n");
	printf("2.Farenheit para Celsius. \n");
	scanf("%d",&escolha);
	
	if(escolha <= 1){
		
		printf("Insira aqui a temperatura em Celsius: \n");
		scanf("%f",&c);
		f=(c*9/5)+32;
		
		printf("O resultado e: %0.2f farenheit.\n",f);
				
	}
	else{
		
		printf("Insira aqui a temperatura em farenheit: \n");
		scanf("%f",&f);
		c=(f-32)*5/9;
		
		printf("O resultado e: %0.2f celsius. \n",c);		
	}
	system("PAUSE");
}
