#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int operacao;
	double altura, base, raio, area;
	
	printf("digite 1 se voce deseja calcular a area do circulo, 2 para calcular a area do quadrado ou 3 para area do triangulo: ");
	scanf("%i", &operacao);
	
	switch(operacao){
		case 1:
			printf("digite o valor do raio:");
			scanf("%lf", &raio);
			area = 3,14 * pow(raio, 2);
			
			printf("a area do circulo = %.2lf", area);
			break;
			
		case 2:
			printf("digite o valor da altura e da base respectivamente: ");
			scanf("%lf %lf", &altura, &base);
			area = base * altura;
			
			printf("a area do quadrado = %.2lf", area);
			break;
			
		case 3:
		    printf("digite o valor da altura e da base respectivamente: ");
			scanf("%lf %lf", &altura, &base);
			area = (base * altura) / 2;
			
			printf("a area do triangulo = %.2lf", area);
			break;
			
		default:
			printf("operação invalida");
			break;
		
	}

}
