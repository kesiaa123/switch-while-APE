#include <stdio.h>
#include <math.h>

int main(){
	double valor1, valor2, soma, subt, mult, divi;
	int operador;
	
	printf("calculadora simples\n");
	printf("digite dois numeros para calcular: ");
	scanf("%lf %lf", &valor1, &valor2);
	
	printf("escolha 1 para: +;  2 para: -; 3 para: *; 4 para: /\n");
	scanf("%i", &operador);
	
	
	switch(operador){
		case 1:
		soma = valor1 + valor2;
			printf("a soma = %.2lf", soma);
			break;
			
		case 2:
		subt = valor1 - valor2;
		    printf("a subtracao = %.2lf", subt);	
		    break;
		    
		case 3:
		mult = valor1 * valor2;
		    printf("a multiplicacao = %.2lf", mult);	
		    break;
		    
	    case 4:
	    	if(valor2 > 0){
	    	divi = valor1 / valor2;
		    printf("a divisao = %.2lf", divi);	
         	}
		    
		    else{
		    	printf("nao existe divisao por zero");
			}
			break;
		
		default:
			printf("operacao invalida");
			break;
	}	
  
}
