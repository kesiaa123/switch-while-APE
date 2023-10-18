#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int dia;
	
	printf("digite um numero de 1 a 7 representando um dia da semana: ");
	scanf("%i", &dia);
	
	switch(dia){
		case 1:
			printf("Segunda é um dia útil");
		 	break;
		
		case 2:
			printf("Terça é um dia útil");
			break;
			
		case 3:
			printf("Quarta é um dia útil");
			break;
			
		case 4:
			printf("Quinta é um dia útil");
			break;
			
		case 5:
			printf("Sexta é um dia útil");
			break;
			
		case 6:
			printf("Sabado é um fim de semana");
			break;
			
		case 7:
			printf("Domingo é um fim de semana");
			break;
			
		default:
			printf("digito invalido");
			break;
	}

}
