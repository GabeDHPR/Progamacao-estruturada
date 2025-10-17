#include <stdio.h>
#include <string.h>
int main(){
 char nome[40];
 int idade;
 printf(" Digite o nome: \n");
 //gets(nome);
 scanf("%s",nome);
 fflush(stdin);
 printf (" Digite a idade: \n");
 scanf("%i", &idade);
 printf(" Nome: %s \t Idade: %i\n", nome, idade);
 return 0;
}
