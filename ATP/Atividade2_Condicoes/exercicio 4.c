//4. Escreva um programa que receba a idade de um nadador e imprima a sua categoria seguindo as regras: Categoria Idade Infantil A Infantil B Juvenil A Juvenil B 5 – 7 anos 8 – 10 anos 11 – 13 anos 14 – 17 anos
#include <stdio.h>

main(){
	
	int idade;
	
	printf ("Insira a idade do nadador: \n");
	scanf ("%d",&idade);
	
	if(idade < 4){
		printf("O nadador precisa ter no minimo 5 anos de idade. \n");
	}
	else if(idade <= 7){
		printf("O nadador faz parte da categoria Infantil A. \n");
	}
	else if(idade <= 10){
		printf("O nadador faz parte da categoria Infantil B. \n");
	}
	else if(idade <= 13){
		printf("O nadador faz parte da categoria Juvenil A. \n");
	}
	else if(idade <= 17){
		printf("O nadador faz parte da categoria Juvenil B. \n");
	}
	else if(idade >=18){
		printf("O nadador precisa ter menos de 18 anos de idade. \n");
	}
	
	system("PAUSE");
}
