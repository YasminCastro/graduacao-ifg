//Uma funcao que calcule a hipotenusa de um triangulo retangulo a partir de seus catetos.
//demonstre o uso dessa funcao pela funcao main.

//copiado

#include <stdio.h>
#include <math.h>


int caclHip(int a, int b) {
  int hip;

  hip = pow(a, 2) + pow(b, 2);
  hip = sqrt(hip);

  return hip;
}

int main() {
  int cateto1, cateto2, h;

  printf("Esse programa calcula a hipotenusa de um triangulo a partir dos seus catetos.\n");

  printf("\nDigite o primeiro cateto: ");
  scanf("%d", &cateto1);

  printf("\nDigite o segundo cateto: ");
  scanf("%d", &cateto2);

  h = caclHip(cateto1, cateto2);
  
  printf("\nA hipotenusa eh: %d", h);

  return 0;
}
