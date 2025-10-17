#include <stdio.h>
#include <string.h>
int main(){

char nome[40], frase[40];
gets(nome);
strcpy(frase,"Bom dia");
strcat(frase," "); //Concatena o nome lido com um espaço
strcat(frase,nome); //Concatena a frase com o nome lido
printf("Imprime nova frase: %s \n", frase);
return 0;
}
