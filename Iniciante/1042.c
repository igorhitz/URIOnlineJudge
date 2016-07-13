#include <stdio.h>

void swap(int *a, int *b){
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int main(){
	int in1, in2, in3;
	int en1, en2, en3;
	
	scanf("%d %d %d", &in1, &in2, &in3);
	en1 = in1; en2 = in2; en3 = in3;

	if (en1 > en2) swap(&en1, &en2);
	if (en2 > en3) swap(&en2, &en3);
	if (en1 > en2) swap(&en1, &en2);

	printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",en1,en2,en3,in1,in2,in3);

	return 0;
}