#include<stdio.h>
#include<string.h>

typedef struct{
	char nome[30];
	char cidade[25];
	int nestudantes;
	
}tipofaculdade;

int main(){
	
	tipofaculdade f;
	
	printf("Digite o nome da faculdade:\n");
	gets(f.nome);
	
	printf("Digite a cidade:\n");
	gets(f.cidade);
	
	printf("Digite a quantidade de estudantes da faculdade:\n");
	scanf("%d", &f.nestudantes);
	
	printf("\nA Faculdade %s localizado em %s possui %d alunos.\n", f.nome, f.cidade, f.nestudantes);
	
	return 0;
}
