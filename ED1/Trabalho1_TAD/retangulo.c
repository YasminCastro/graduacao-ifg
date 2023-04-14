//ai aqui eu coloquei as blibliotecas, a primeira pra poder usar a malloc, e a segunda é a biblioteca q vai pegar a informação do arquivo que seria o visivel para o usuario
#include <stdlib.h>
#include "retangulo.h"


struct retangulo{  //criei a função struct para o retangulo
	float a, b;
};

re* re_cria(float a, float b){ //aqui é onde eu crio de fato a função e onde aloco uma area na memoria usando o m alloc, e depois inicializa a estrutura com os valores fornecidos
	
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

float base (re* r){   //essas tres estruturas é onde tem o acesso ao ponteiro re e depois ele pega aqui o valor da base, altura e a multiplicação para fazer o calculo da area 
	return r->b;
}

float altura (re* r){
	return r->a;
}

float area (re* r){
	return r->a * r->b;
}
