#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"");
	
	float valor,real,dolar;
	
	
	printf("\nQual valor em real?\n>:");
	scanf("%f",&valor);
	
	printf("Real pra dolar = %.2f, dolar pra real= %.2f",0.19*valor,5.35*valor);
	
	printf("\n%.1f",real);
	return 0;
}
