#include <stdio.h>
#include <string.h>
int main(){
char nome[40], nome2[40];
int idade,idade2,soma;
printf("Digite um nome: ");
gets(nome);
printf("Agora digite a idade: ");
scanf("%d",&idade);
fflush(stdin);
printf("Agora digite outro nome: ");
gets(nome2);
printf("Agora digite a idade: ");
scanf("%d",&idade2);
soma = strlen(nome) + strlen(nome2);
printf("%s tem %d anos e %s tem %d anos.Seus nomes somam %d caracteres",nome,idade,nome2,idade2,soma);
return 0;
}
