// Construa um programa que tendo como entrada dois pontos quaisquer do plano P(x1,y1) e Q(x2,y2), imprima a distância entre eles.//


#include <stdio.h>
#include <math.h>
main()
{
	double p,q,x1,y1,x2,y2,resultado;
	printf("Digite os 2 pontos do plano P: ");
	scanf("%lf %lf", &x1,&y1);
	printf("Agora digite os 2 pontos do plano Q: ");
	scanf("%lf %lf", &x2, &y2);
	
	p= x2-x1;
	q= y2-y1;
	resultado= sqrt(pow(p,2) + pow(q,2));
	printf("O resultado: %0.2lf " ,resultado);
	system("PAUSE");
 }

