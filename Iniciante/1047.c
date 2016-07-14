#include <stdio.h>

int main(){
	int atualh, atualmin, fimh, fimmin, contadormin = 0, contadorh = 0;

	scanf("%d %d %d %d", &atualh, &atualmin, &fimh, &fimmin);

	do{
		contadormin++;
		atualmin++;
		if (contadormin == 60) { contadormin = 0; contadorh++; }
		if (atualmin == 60) { atualmin = 0; atualh++;}
		if (atualh == 24) atualh = 0;
	}while(atualh != fimh || atualmin != fimmin);

	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", contadorh, contadormin);

	return 0;
}