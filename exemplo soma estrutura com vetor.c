#include <stdio.h>
#define T 3

struct soma{
	float vet[4],total;
};
int main (){
	struct soma somas[T];
	int x,y;
	printf("Digite os valores: ");
	for(x=0;x<T;x++){
		somas[x].total = 0;
		printf("\nDigite os valores do vetor na posicao: %d",x);
		for(y=0;y<4;y++){
			scanf("%f",&somas[x].vet[y]);
			somas[x].total = somas[x].total + somas[x].vet[y];
		}
	}
	printf("\n");
	for(x=0;x<T;x++){
	printf("\nVetor posicao: %d",x);
	for(y=0;y<4;y++){
		printf("\n%f ",somas[x].vet[y]);	
	}
		printf("%f \n",somas[x].total);
	}
return 0;
}
