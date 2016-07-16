#include <stdio.h>

int main(){
	int diaI, diaF, horaI, horaF, minI, minF, segI, segF;
	int segC = 0, minC = 0, horaC = 0, diaC = 0;

	scanf("%*s %d %d %*c %d %*c %d", &diaI, &horaI, &minI, &segI);
	scanf("%*s %d %d %*c %d %*c %d", &diaF, &horaF, &minF, &segF);

	do{
		segC++;
		segI++;
		if (segC == 60) { segC = 0; minC++; }
		if (segI == 60) { segI = 0; minI++; }
		if (minC == 60) { minC = 0; horaC++; }
		if (minI == 60) { minI = 0; horaI++; }
		if (horaC == 24) { horaC = 0; diaC++; }
		if (horaI == 24) { horaI = 0; diaI++; }
	}while(diaF != diaI || horaF != horaI || minF != minI || segI != segF);

	printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", diaC, horaC, minC, segC);

	return 0;
}