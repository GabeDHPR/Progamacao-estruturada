#include <stdio.h>
#include <stdlib.h>

int main (){
	int *vet,tam,i,tam1,total;
	printf("Digite o tamanho do vetor: ");
	scanf("%d",&tam);
	vet = (int*)malloc(tam*sizeof(int));
	if(vet ==NULL){
		exit(1);
	}
	printf("\nDigite %d de valores:  ",tam);
	for(i=0;i<tam;i++){
		scanf("%d",&vet[i]);
	}
	printf("\nVetor:  \n");
	for(i=0;i<tam;i++){
		printf("%d",vet[i]);
	}
	printf("\nQuantos valores a mais:  ");
	scanf("%d",&tam1);
	total = tam + tam1;
	vet = (int*)realloc(vet,total*sizeof(int));
	
	printf("\nDigite %d novos valores:  ",tam1);
	for(i=tam;i<total;i++){
		scanf("%d",&vet[i]);
	}
	printf("\nVetor:  \n");
	for(i=0;i<total;i++){
		printf("%d",vet[i]);
	}
	free(vet);
	return 0;
}
