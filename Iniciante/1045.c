#include <stdio.h>

void swap(double *a, double *b){
	double aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int main(){
	double A, B, C;

	scanf("%lf %lf %lf", &A, &B, &C);
	if (A < B) swap(&A, &B);
	if (B < C) swap(&B, &C);
	if (A < B) swap(&A, &B);

	if (A >= B + C)
		printf("NAO FORMA TRIANGULO\n");
	else {
		if (A*A == B*B + C*C)
			printf("TRIANGULO RETANGULO\n");
		if (A*A > B*B + C*C)
			printf("TRIANGULO OBTUSANGULO\n");
		if (A*A < B*B + C*C)
			printf("TRIANGULO ACUTANGULO\n");
		if (A == B && A == C)
			printf("TRIANGULO EQUILATERO\n");
		if ((A == B && A != C) || (B == C && B != A) || (A == C && A != B))
			printf("TRIANGULO ISOSCELES\n");
	}


	return 0;
}