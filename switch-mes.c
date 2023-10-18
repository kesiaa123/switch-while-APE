#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int mes;
	
	printf("digite um numero de 1 a 12 representando um mes: ");
	scanf("%i", &mes);
	
	switch(mes){
		case 1:
			printf("Janeiro tem 31 dias");
			break;
	
  		case 2:
			printf("Fevereiro tem 28 dias");
			break;
			
		case 3:
			printf("Março tem 31 dias");
			break;
		
		case 4:
			printf("Abril tem 30 dias");
			break;
		
		case 5:
			printf("Maio tem 31 dias");
			break;
		
		case 6:
			printf("Junho tem 30 dias");
			break;
		
		case 7:
			printf("Julho tem 31 dias");
			break;
			
		case 8:
			printf("Agosto tem 31 dias");
			break;
			
		case 9:
			printf("Setembro tem 30 dias");
			break;
			
		case 10:
			printf("Outubro tem 31 dias");
	     	break;
	     	
		case 11:
			printf("Novembro tem 30 dias");
			break;
			
		case 12:
			printf("Dezembro tem 31 dias");
			break;
	}
}
