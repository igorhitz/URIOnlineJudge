#include <stdio.h>
 
int main() {
    int i, aux, maior, posicao;
    
    scanf("%d", &maior);
    posicao = 1;
    for(i = 2; i <= 100; i++){
        scanf("%d", &aux);
        if (maior < aux){
            maior = aux;
            posicao = i;
        }
    }
    
    printf("%d\n%d\n",maior,posicao);
    
    return 0;
}