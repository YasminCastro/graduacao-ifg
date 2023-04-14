//aqui a função principal 
#include <stdio.h>
#include <stdlib.h>
#include "retangulo.h"

int main(){
	
	re* r; // aqui o ponteiro criado 
	r = re_cria(2, 6); //os parametros que eu defini
	printf("A area do triangulo eh: %0.2f \n", area (r) ); // aqui o printf mostrando o resultado
	
	re_libera(r); //ai terminando ele libera o espaço 
	
	return 0;
}
