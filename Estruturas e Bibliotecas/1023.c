#include <stdio.h>
#include <stdlib.h>

typedef struct Casa{
	int moradores;
	int consumoTotal;
	int media;
} Casa;

int main(){
	int N, i, contador = 0, totalMoradores = 0;
	Casa Cidade[1000000];
	double mediaTotal;

	do{
		scanf("%d", &N);
		if (N == 0)
			return 0;

		for(i = 0 ; i < N; i++){
			scanf("%d %d", &a, &b);
			Cidade[i].moradores = a;
			Cidade[i].consumoTotal = b;
			Cidade[i].media = b/a;
			mediaTotal += b;
			totalMoradores += a;
		}
		mediaTotal /= totalMoradores;

		printf("Cidade# %d:\n", ++contador);
		printf("Consumo medio: %.2lf m3.\n", mediaTotal);

	}while(1);

	return 0;
}