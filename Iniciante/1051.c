#include <stdio.h>

double calculaTaxa(double salario){
	double taxa = 0;

	if (salario > 4500){
		salario = salario - 4500;
		taxa = 28*salario/100;
		taxa += calculaTaxa(4500);
	}
	else if (salario > 3000){
		salario = salario - 3000;
		taxa = 18*salario/100;
		taxa += calculaTaxa(3000);
	}
	else if (salario > 2000){
		salario = salario - 2000;
		taxa = 8*salario/100;
		taxa += calculaTaxa(2000);
	}

	return taxa;
}

int main(){
	double salario, total;
	scanf("%lf", &salario);
	total = calculaTaxa(salario);
	if (total == 0) printf("Isento\n");
	else printf("R$ %.2lf\n", total);
	return 0;
}