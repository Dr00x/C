#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,""); //regionalizacao
	
	int idade;
	printf("\nQual sua idade?\n>:");
	scanf("%i",&idade);
	
	if(idade >= 18){
		printf("Você é maior de idade");
	}else{
		printf("Você é menor de idade");
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
A linguagem C não possui por padrão 
o tipo boleano, por isso, ele usa o 1 e 0 como verdadeiroe/ou falso, 
como em binários, onde 1 possui tensão e 0 não possui. Sendo assim, o while - ou qualquer outro comando 
de condições como 0 sendo falso e 1 - ou qualquer número diferente de 0 - sendo verdadeiro.
*/
