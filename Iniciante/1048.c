#include <stdio.h>

int main(){
	double novo, salario;
	int reajuste;

	scanf("%lf", &salario);
	if(salario <= 400)
		reajuste = 15;
	else if (salario <= 800)
		reajuste = 12;
	else if (salario <= 1200)
		reajuste = 10;
	else if (salario <= 2000)
		reajuste = 7;
	else
		reajuste = 4;

	novo = salario + salario*reajuste/100;
	printf("Novo salario: %.2lf\n", novo);
	printf("Reajuste ganho: %.2lf\n", novo-salario);
	printf("Em percentual: %d %%\n", reajuste);

	return 0;
}