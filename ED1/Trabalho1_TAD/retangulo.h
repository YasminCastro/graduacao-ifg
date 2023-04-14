typedef struct retangulo re;  //defini a estruruta 

re* re_cria(float a, float b); //a = altura  b=base  //criei a função de inicialização usando o ponteiro e declarei a altura e a base do retangulo usando float pra se por acaso o numero for com virgula

void re_libera(re* r); // ai criei esse void para liberar espaço na memoria com a referencia o proprio ponteiro 


// aqui tem as tres funções uma pra base, outra pra altura e uma pra calcular a area, e todas tem a referencia do ponteiro que criei 
float base (re* r); //obter a base
float altura (re* r); //obter a altura
float area (re* r); //calcular a area 
