#include <stdio.h>
#define T 3

struct soma{
	float n1,n2,total;
};
void somar(struct soma s1);
int main (){
	struct soma soma1;
	somar(soma1);
	return 0;
}

void somar(struct soma s1){
	printf("Digite os valores: ");
	scanf("%f%f", &s1.n1, &s1.n2);
	s1.total = s1.n1 + s1.n2;
	printf("\n Resultado: %f ",s1.total);
}


