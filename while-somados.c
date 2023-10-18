#include <stdio.h>
#include <math.h>


int main(){
	
	double n1, n2, soma;
	
	while(n1 > 0 && n2 > 0){
	printf("digite um numero inteiro positivo: ");
	scanf("%lf", &n1);
	if(n1 < 0){
		break;
	}
	printf("digite um numero inteiro positivo: ");
	scanf("%lf", &n2);
	if(n2 < 0){
		break;
	}
	soma = n1 + n2;
	
	printf("soma = %.2lf\n", soma);
	
	}
   printf("erro");
}
