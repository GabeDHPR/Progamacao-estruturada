#include <stdio.h>
#include <string.h>
int main(){
char nome[40], nome2[40],nome3[40],frase[100];
printf("Digite um nome: ");
gets(nome);
fflush(stdin);
printf("Agora digite outro nome: ");
gets(nome2);
printf("Agora digite o ultimo nome: ");
gets(nome3);
printf("%s, %s e %s são colegas de curso.",nome,nome2,nome3);
return 0;
}
