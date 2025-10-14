#include <stdio.h>
struct data{ //Define a struct (registro) e seus elementos
 int dia, ano;
 char mes[20];
};
void ler(struct data *ii_data);
void exibe(struct data *ii_data);
int main(){
 struct data i_data;
 ler(&i_data);
 exibe(&i_data);
 return 0;
}
void ler(struct data *ii_data){
 printf("\nDigite a data (dia/mes/ano):\n");
 scanf("%d%s%d",&(*ii_data).dia,&(*ii_data).mes,
&(*ii_data).ano);
}
void exibe(struct data *ii_data){
 printf("\nDia %d de %s de %d\n", (*ii_data).dia,
(*ii_data).mes, (*ii_data).ano);
}
