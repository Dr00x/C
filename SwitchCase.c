#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"");
	int operador;
	int n1;
	int n2;
	
	printf("escolha um operador\n\n 1 p/adi��o\n 2 p/subtra��o\n 3 p/divis�o\n 4 p/multplica��o\n>:");
	scanf("%i",&operador);
	printf("\ndigite um numero\n>:");
	scanf("%i",&n1);
	printf("\ndigite um numero\n>:");
	scanf("%i",&n2);
	
	switch(operador){
		case 1:
			printf("\nAdi��o!");
			printf("\nResultado: %i",n1 + n2);
			break;
		case 2:
			printf("\nSubtra��o!");
			printf("\nResultado: %i",n1 - n2);
			break;
		case 3:
			printf("Divis�o!");
			printf("\nResultado: %i",n1 / n2);
			break;
		case 4:
			printf("Multiplicac�o");
			printf("\nResultado: %i",n1 * n2);
			break;
		default:
			printf("\nOp��o invalida");
	}

return 0; 
}
