#include <stdio.h>
#define L 3
#define C 40
int main(){
	char nomes[L][C],nome[C],l;
	int x,y,opcao,verd,cr;
	printf("Digite o nome de 8 alunos: ");
	for(x=0;x<L;x++){
			scanf(" %[^\n]s",&nomes[x]);
		}
	do{
	printf("\nSe quiser procurar um nome especifico = 1 se for pelas letras iniciais = 2 se quiser sair = 3");
	scanf("%d",&opcao);
	switch(opcao){
		case 1:
			printf("\nDigite o nome que deseja procurar: ");
			scanf(" %[^\n]s",&nome);
				for(x=0;x<L;x++){
			verd =	strcmp(nomes[x],nome);
			
			if(verd == 0){
			printf("\n O nome esta na lista");
			break;
			}
	}
		if(verd != 0){
				printf("\n O nome nao esta na lista");
			}
			break;
		case 2: 
		printf("\n Digite qual inicial deseja procurar: ");
		scanf(" %c",&l);
		for(x=0;x<L;x++){
			if(l == nomes[x][0]){
			printf(" %s\n",nomes[x]);
			}
		}
			break;
	}
}while(opcao != 3);
	return 0;
}
