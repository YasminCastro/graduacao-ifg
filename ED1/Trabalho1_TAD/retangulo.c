//ai aqui eu coloquei as blibliotecas, a primeira pra poder usar a malloc, e a segunda � a biblioteca q vai pegar a informa��o do arquivo que seria o visivel para o usuario
#include <stdlib.h>
#include "retangulo.h"


struct retangulo{  //criei a fun��o struct para o retangulo
	float a, b;
};

re* re_cria(float a, float b){ //aqui � onde eu crio de fato a fun��o e onde aloco uma area na memoria usando o m alloc, e depois inicializa a estrutura com os valores fornecidos
	
	re* r= (re*) malloc (sizeof(re));
	if(r!=NULL){
		
		r->a = a;
		r->b = b;
		
	}
	
	return r;
}

void re_libera(re* r){  // aqui eu to liberando a memoria 
	free (r);
}

float base (re* r){   //essas tres estruturas � onde tem o acesso ao ponteiro re e depois ele pega aqui o valor da base, altura e a multiplica��o para fazer o calculo da area 
	return r->b;
}

float altura (re* r){
	return r->a;
}

float area (re* r){
	return r->a * r->b;
}
