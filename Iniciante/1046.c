#include <stdio.h>

int main(){
	int atual, fim, contador = 0;

	scanf("%d %d", &atual, &fim);

	do{
		contador++;
		atual++;
		if (atual == 24) atual = 0;
	}while(atual != fim);

	printf("O JOGO DUROU %d HORA(S)\n", contador);

	return 0;
}