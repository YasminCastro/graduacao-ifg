#include <iostream>
#define TAM 8 

int SomaPositivos(int *A, int n){
	int s=0;
	for(int i=0; i<n; i++){
		if(A[i]>0)
			s+=A[i];
	}
	
	return s;
}

int main(int argc, char** argv){
	int vetor [TAM]= {1,-3,4,-9,-1,-2,-7,6};
	
	printf("%d", SomaPositivos(vetor, TAM));
	return 0;
}
