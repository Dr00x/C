#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"");
	int operador;
	int n1;
	int n2;
	
	printf("escolha um operador\n\n 1 p/adição\n 2 p/subtração\n 3 p/divisão\n 4 p/multplicação\n>:");
	scanf("%i",&operador);
	printf("\ndigite um numero\n>:");
	scanf("%i",&n1);
	printf("\ndigite um numero\n>:");
	scanf("%i",&n2);
	
	switch(operador){
		case 1:
			printf("\nAdição!");
			printf("\nResultado: %i",n1 + n2);
			break;
		case 2:
			printf("\nSubtração!");
			printf("\nResultado: %i",n1 - n2);
			break;
		case 3:
			printf("Divisão!");
			printf("\nResultado: %i",n1 / n2);
			break;
		case 4:
			printf("Multiplicacão");
			printf("\nResultado: %i",n1 * n2);
			break;
		default:
			printf("\nOpção invalida");
	}

return 0; 
}
