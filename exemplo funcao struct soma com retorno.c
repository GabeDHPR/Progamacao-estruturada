#include <stdio.h>
#define T 3

struct soma{
	float n1,n2,total;
};
float somar(struct soma s1);
int main (){
	float total1;
	struct soma soma1;
	total1 = somar(soma1);
	printf("O resultado eh:  %f",total1);
	return 0;
}

float somar(struct soma s1){
	printf("Digite os valores: ");
	scanf("%f%f", &s1.n1, &s1.n2);
	s1.total = s1.n1 + s1.n2;
	return s1.total;
}


