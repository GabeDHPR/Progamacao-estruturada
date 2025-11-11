#include <stdio.h>
struct data{ //Define a struct e seus elementos
 int dia, ano;
 char mes[20];
};
int main(){
 struct data item1, item2; //Declara variáveis da struct data
 printf("\nDigite a data (dia/mes/ano):\n");
 scanf("%d%*c", &item1.dia);
gets(item1.mes);
 scanf("%d", &item1.ano);
 printf("\nDigite a segunda data (dia/mes/ano):\n");
 scanf("%d%s%d", &item2.dia, &item2.mes, &item2.ano);
 printf("\n%d de %s de %d \n",item1.dia,item1.mes,item1.ano);
 printf("\n%d de %s de %d \n",item2.dia,item2.mes,item2.ano);
 return 0;
}

