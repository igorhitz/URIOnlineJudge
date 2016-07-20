#include <stdio.h>
 
int main() {
    double i,j, fracao = 0;
    int cont;
    
    for(i = 0, j = 1, cont = 1; i < 2.1; j+=1, cont++){
        printf("I=%g J=%g\n", i, j);
        
        if(cont >= 3){
            fracao += 0.2;
            i = 0 + fracao;
            j = i;
            cont = 0;
        }
        
    }
 
    return 0;
}