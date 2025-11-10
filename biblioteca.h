#include <stdio.h>
#include <stdlib.h>

void alocaVet(int **vet,int n){
	*vet = (int*)calloc(n,sizeof(int));
	if(*vet==NULL){
		exit (1);
	}
}

void ler(int *vet,int n){
	int x;
	printf("\nDigite %i valores:  ");
	for(x=0;x<n;x++){
		scanf("%i", &vet[x]);
	}
}

void imprimir(int *vet,int n){
	int x;
	printf("\nVetor:  ");
	for(x=0;x<n;x++){
		printf("%i ",vet[x]);
	}
}
