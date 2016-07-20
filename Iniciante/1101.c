#include <stdio.h>
 
int main() {
    int a, b, aux, i, sum;
    
    scanf("%d %d", &a, &b);
    while(a > 0 && b > 0){
        sum = 0;
        if (b < a){
            aux = a;
            a = b;
            b = aux;
        }
        for(i = a; i<= b; i++){
            printf("%d ", i);
            sum += i;
        }
        printf("Sum=%d\n",sum);
        
        scanf("%d %d", &a, &b);
    }
 
    return 0;
}