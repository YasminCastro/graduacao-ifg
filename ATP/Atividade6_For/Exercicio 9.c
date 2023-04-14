#include <stdio.h>

int main(){

float j, i, total= 0;

for(i=0; i<=7 ;i++){

for(j=0; j<= 7 ;j++){

total+=((2*j+1)*i) / (2*j+5);
}
}
printf("O total e: %0.2f \n A formula se repete %0.2f vezes",total, i*j);
return (0);
}