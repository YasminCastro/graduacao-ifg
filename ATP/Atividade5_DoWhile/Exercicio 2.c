//Uma    loja    usa    os    seguintes    códigos    para    as transações de cada dia: 
//‘d’ - para compras à vista em dinheiro ‘c’ - para compras à vista em cheque 's'- para sair do programa
//Escreva   um   programa   que   receba   uma   lista   de transações  contendo  o  valor  de  cada  compra  e  o respectivo  código  da  transação.  
//O  programa  deve calcular e imprimir ao final:- valor total das compras à vista em dinheiro- valor total das compras à vista em cheque- valor total das compras efetuadas.

#include <stdio.h>

int main(){
 
 char codigo;
 float valor;
 float VC=0, VD=0, VT=0; //VC- valor em cheque, VD- valor em dinheiro, VT- valor total

 do{
   printf("Insira o codigo da transacao:\n 'd' para compras em dinheiro.\n 'c' para compras em cheque.\n 's' para sair do programa.\n" );
   scanf("%s", &codigo);

   if(codigo == 'd'){
     printf("Transacao em dinheiro.\nInsira o valor:\n");
     scanf ("%f", &valor);
     VD=VD+valor;
  }
    if(codigo == 'c'){
      printf("Transacao em cheque.\n Insira o valor:\n");
      scanf("%f", &valor);
      VC=VC+valor;

    } 
   
  }
while(codigo != 's');
printf("Total em dinheiro: %0.2f\n", VD);
printf("Total em cheque: %0.2f \n", VC);
VT=VC+VD;
printf("Valor total: %0.2f \n", VT);

return(0);
}
