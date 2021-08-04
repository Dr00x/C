#include <stdio.h>
#include <conio.h>

int main(void){
	char a,b;
	
	printf("\nDigite um caracter para verificar na tabela ASCII\n>:");
	a = getchar();
	printf("\nO numero do caracter na tabela ASCII e >%d<",a);
	
	printf("\nDigite um numero para ver qual e na tabela ASCII\n>:");
	scanf("%i",&b);
	printf("\nO numero indicado representa o caracter >%c< na tabela ASCII",b);
	
	return 0;
}
