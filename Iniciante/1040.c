#include <stdio.h>

int main(){
	double nota1, nota2, nota3, nota4, media, exame;
	
	/* Leitura de Notas */
    scanf("%lf %lf %lf %lf", &nota1, &nota2, &nota3, &nota4);

	media = 2*nota1 + 3*nota2 + 4*nota3 + nota4;
	media /= 10;

	printf("Media: %.1lf\n", media);
	if (media < 5){
		printf("Aluno reprovado.\n");
	}
	else if (media >= 7){
		printf("Aluno aprovado.\n");
	}
	else{
		printf("Aluno em exame.\n");
		scanf("%lf", &exame);
		printf("Nota do exame: %.1lf\n", exame);
		media += exame;
		media /= 2;
		if (media >= 5) printf("Aluno aprovado.\n");
		else printf("Aluno reprovado.\n");
		printf("Media final: %.1lf\n", media);
	}

	return 0;
}