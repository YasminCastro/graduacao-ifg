//Tendo como dado de entrada a altura de uma pessoa, construa um programa que calcule seu peso ideal, utilizando a seguinte fórmula:•h = altura (em metros)•peso ideal = (72.7 x h) – 58//

#include <stdio.h>
main()
{
	double h, peso; 
	
	printf("Qual sua altura? ");
	scanf("%lf", &h);
	peso= (72.7*h)-58;
	printf("Seu peso ideal: %0.2lf", peso);
	
	system("PAUSE");
	
}
