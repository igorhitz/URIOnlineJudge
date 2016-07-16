#include <stdio.h>
 
int main() {
    int i, N, aux;
    int coelhos = 0, ratos = 0, sapos = 0, total = 0;
    char tipo;
    
    scanf("%d", &N);
    for(i = 0; i < N; i++){
        scanf("%d %c", &aux, &tipo);
        total += aux;
        switch(tipo){
            case 'C':
                coelhos+= aux;
            break;
            case 'R':
                ratos+= aux;
            break;
            case 'S':
                sapos+= aux;
            break;
        }
    }
    
    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n", total, coelhos, ratos, sapos);
    printf("Percentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n", coelhos*100/(float)total, ratos*100/(float)total, sapos*100/(float)total );
    
    return 0;
}