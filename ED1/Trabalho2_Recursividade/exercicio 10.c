/*Reescreva o programa abaixo usando ponteiros, ajustando a declaração do vetor através de alocação dinâmica e os acessos ao vetor através da aritmética de ponteiros.

#include <stdio.h>
#include<stdlib.h>
#define MAXN 10
int main(int argc, char *argv[]) {
int m[MAXN][MAXN];
for(int i=0; i<MAXN; i++) {
for(int j=0; j<MAXN; j++) {
m[i][j] = 0;
}
}
for(int i=0; i<MAXN; i++) {
for(int j=0; j<MAXN; j++) {
printf("%d ", m[i][j]);
}
printf("\n");
}
return 0;
}

*/
#include <stdio.h>
#include<stdlib.h>

int main(){
	
	int *matriz;
	int i, j;
	int l = 10;
	int c = 10;
	matriz=malloc(l * c * sizeof(int));
	
	for(i=0;i<l; i++){
		
		for(j=0;j<c;j++){
			
			matriz[(i*c)+j]=0;
		}
	}
	for(i=0; i<l; i++){
		for(j=0;j<c;j++){
			printf("%d", matriz[(i*c)+j]);
		}
		printf("\n");
	}
	free(matriz);
	return 0;
}
