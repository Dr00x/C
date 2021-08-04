#include <stdio.h>
#include <conio.h>

int main(void){
	char a,b;
	
	printf("\nDigite um caracter para verificar na tabela ASCII\n>:");
	a = getchar();
	printf("O numero do caracter na tabela ASCII e >%d<\n",(int)a);
	
	printf("\nDigite um numero para ver qual e na tabela ASCII\n>:");
	scanf("%i",&b);
	printf("O numero indicado representa o caracter >%c< na tabela ASCII\n",(int)b);
	
	return 0;
}


//Casting trocar temporariamente o tipo da variavel de char pra int e float e etc
/*e é usado colocando ('dentro o paramentro que deseja trocar da variavel e dps a variave')
como é possivel ver na linha 9 ou na linha 13.
*/

//EXPLICACAO AKI ^^^^^^^^^^^^^^^^^^^^^^^^^^^^
