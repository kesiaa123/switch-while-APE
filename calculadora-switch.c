#include <stdio.h>
#include <math.h>

int main(){
	double valor1, valor2, soma, subt, mult, divi;
	int operador;
	
	printf("   _-_-_-_-calculadora_-_-_-_\n");
	printf("Digite dois numeros para calcular:\n");
	scanf("%lf", &valor1);
	scanf("%lf", &valor2);
	
	printf("\nEscolha:\n 1 para: +;\n 2 para: -;\n 3 para: *;\n 4 para: /;\n");
	scanf("%i", &operador);
	
	
	switch(operador){
		case 1:
		soma = valor1 + valor2;
			printf("\na soma = %.2lf", soma);
			break;
			
		case 2:
		subt = valor1 - valor2;
		    printf("\na subtracao = %.2lf", subt);	
		    break;
		    
		case 3:
		mult = valor1 * valor2;
		    printf("\na multiplicacao = %.2lf", mult);	
		    break;
		    
	    case 4:
	    	if(valor2 > 0){
	    	divi = valor1 / valor2;
		    printf("\na divisao = %.2lf", divi);	
         	}
		    
		    else{
		    	printf("\nnao existe divisao por zero");
			}
			break;
		
		default:
			printf("operacao invalida");
			break;
	}	
  
}
