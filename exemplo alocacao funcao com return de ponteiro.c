#include <stdio.h>
#include <stdlib.h>

void ler(int *vet,int n);
void imprimir(int *vet,int n);
//void alocaVet(int **vet,int n);
int* alocaVet(int n);

int main(){
	int *vet,n;
	printf("Tamanho do vetor:  ");
	scanf("%d",&n);
	//alocaVet(&vet,n);
	vet = alocaVet(n);
	ler(vet,n);
	imprimir(vet,n);
	return 0;
}

//void alocaVet(int **vet,int n){
//	*vet = (int*)calloc(n,sizeof(int));
//	if(*vet==NULL){
//		exit (1);
//	}
//}

int* alocaVet(int n){
	int *vet;
	vet = (int*)calloc(n,sizeof(int));
	if(vet==NULL){
		exit (1);
	}
	return vet;
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
