#include <stdio.h>
 
int main() {
    int n, x, y;
    
    scanf("%d", &n);
    
    while(n > 0){
        scanf("%d %d", &x, &y);
        if(y == 0){
            printf("divisao impossivel\n");
        }else{
            printf("%.1lf\n", (float)x/(float)y);
        }
        n--;
    }
 
    return 0;
}