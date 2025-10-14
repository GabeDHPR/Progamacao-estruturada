#include <stdio.h>

struct eleicoes{
	char nome[50],chapa[50];
	int votos;
	float percentual;
};

void percentual(struct eleicoes *c,int t);
void leitura(struct eleicoes *c);
void imprimir(struct eleicoes *c);

int main(){
	struct eleicoes candidato1,candidato2,candidato3;
	int total;
	total = 0;
	leitura(&candidato1);
	total = total + candidato1.votos;
	leitura(&candidato2);
	total = total + candidato2.votos;
	leitura(&candidato3);
	total = total + candidato3.votos;
	percentual(&candidato1,total);
	percentual(&candidato2,total);
	percentual(&candidato3,total);
	imprimir(&candidato1);
	imprimir(&candidato2);
	imprimir(&candidato3);
	
}

void leitura(struct eleicoes *c){
	struct eleicoes candidato;
	printf("\nDigite o nome do candidato, a chapa e o número de votos que ele recebeu");
	scanf(" %[^\n]s", c->nome);
	scanf(" %[^\n]s", c->chapa);
	scanf("%d", &c->votos);
}

void percentual(struct eleicoes *c,int t){
	c->percentual = (float)c->votos / (float)t * 100;
}

void imprimir(struct eleicoes *c){
		printf("\n==================================================");
		printf("\n Nome: %s  Partido: %s Percentual de votos: %f%", c->nome,c->chapa,c->percentual);
	}




