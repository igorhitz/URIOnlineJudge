#include <stdio.h>
 
int main() {
    double nota1, nota2, media;
    
    
    scanf("%lf", &nota1);
    while(nota1 < 0 || nota1 > 10){
        scanf("%lf", &nota1);
        printf("nota invalida\n");
    }
 
    scanf("%lf", &nota2);
    while(nota2 < 0 || nota2 > 10){
        scanf("%lf", &nota2);
        printf("nota invalida\n");
    }
    
    printf("media = %.2lf\n", (nota1+nota2)/2);
    
 
    return 0;
}