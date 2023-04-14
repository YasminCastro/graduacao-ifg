#include <stdio.h>
#include <string.h>
#define maxn 100

typedef struct{
	char nome[30];
	char cidade[25];
	int nestudantes;
	
}tipofaculdade;


typedef struct{
	tipofaculdade lista[maxn];
} listafaculdades;

int main(){
	
	listafaculdades facul;
	int i=0, j, flagcontinuar;
	
	do{
		
		printf("%d)Digite o nome da faculdade:\n", i);
		scanf("%s", &facul.lista[i].nome);
			
		printf("%d)Digite a cidade:\n", i);
		scanf("%s", &facul.lista[i].cidade);
		
		printf("%d)Digite a quantidade de estudantes da faculdade:\n", i);
		scanf("%d", &facul.lista[i].nestudantes);
		
		printf("-----------------------------------------------------------------\n");
			
		
		printf("Continuar? (1-Sim / 0-Nao):\n");
		scanf("%d",&flagcontinuar);
	 i++;
	}while(flagcontinuar && i < maxn);
	
	printf("LISTA DE FACULDADES	\n");
	printf("%-4s %-15s %-20s %-10s\n", "#", "FACULDADE", "CIDADE", "NUMERO DE ESTUDANTES");
	for(j=0; j<i; j++){
		printf("%-4d %-15s %-20s %-10d\n", j, facul.lista[j].nome, facul.lista[j].cidade, facul.lista[j].nestudantes);
	}

	return 0;		
}

