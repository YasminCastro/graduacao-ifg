#include<stdio.h>
#include<string.h>

typedef struct{
	char nome [10];
	float valor;
	int estoque;
}produto;

int main(){
	
	produto p;
	
	printf("Insira o nome do produto:\n");
	gets(p.nome);
	
	printf("Qual o valor do produto:\n");
	scanf("%f",&p.valor);
	
	printf("Insira a quantidade de itens em estoque:\n");
	scanf("%d", &p.estoque);
	
	printf("O produto eh %s, custa R$%0.2f, e possui %d em estoque.\n", p.nome, p.valor, p.estoque);
	
	
	return 0;
}
