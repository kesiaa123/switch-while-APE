#include <stdio.h>
#include <math.h>


int main(){

	double q;
	int n1, i = 1;
	
	printf("digite um numero inteiro positivo: ");
	scanf("%i", &n1);
	
	while(i <= n1){
	
	printf("numero: %i e seu quarado = %.2lf\n", i, q);
		
	i++;
	q = pow(i, 2);
	
	
	}
	
	
}
