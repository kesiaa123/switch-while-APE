#include <stdio.h>
#include <math.h>

int main(){

    int n1, divisor, i = 1;

    printf("digite um numero inteiro positivo: ");
    scanf("%i", &n1);


    while (i <= n1){
        if(n1 % i == 0){
            divisor = i;
            printf("divisor: %i\n", divisor);
        }

        i++;

    }
    
}
