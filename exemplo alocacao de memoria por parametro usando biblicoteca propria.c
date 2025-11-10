#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"


int main(){
	int *vet,n;
	printf("Tamanho do vetor:  ");
	scanf("%d",&n);
	alocaVet(&vet,n);
	ler(vet,n);
	imprimir(vet,n);
	return 0;
}

