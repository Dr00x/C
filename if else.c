#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,""); //regionalizacao
	
	int idade;
	printf("\nQual sua idade?\n>:");
	scanf("%i",&idade);
	
	if(idade >= 18){
		printf("Voc� � maior de idade");
	}else{
		printf("Voc� � menor de idade");
	}
	
	return 0;
}

/*if-else
	estrutura:

	if(PARAMETROS){
		Oque vai acontecer/bloco de instrucoes
	}else{
		oque vai acontecer senao for false o if SE/SENAO/bloco de instrucoes
	}
*/


/*
A linguagem C n�o possui por padr�o 
o tipo boleano, por isso, ele usa o 1 e 0 como verdadeiroe/ou falso, 
como em bin�rios, onde 1 possui tens�o e 0 n�o possui. Sendo assim, o while - ou qualquer outro comando 
de condi��es como 0 sendo falso e 1 - ou qualquer n�mero diferente de 0 - sendo verdadeiro.
*/
