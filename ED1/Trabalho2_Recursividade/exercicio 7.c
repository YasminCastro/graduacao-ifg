#include <stdio.h>

void operacoes (int a, int b, int *soma, int *subtracao){
	*soma = a+b;
	*subtracao = a-b;
}

int main (){
	int a,b,soma,subtracao;
	
	printf("Insira o primeiro numero:\n");
	scanf("%d", &a);
	printf("Insira o segundo numero:\n");
	scanf("%d",&b);
	
	operacoes(a, b, &soma, &subtracao);
	printf("A soma e: %d \n", soma);
	printf("A subtracao e: %d \n", subtracao);
	
	return 0;
}
