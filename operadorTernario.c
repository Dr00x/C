#include <stdio.h>

int main(void){
	int idade;
	printf("\nQual sua idade?\n>:");
	scanf("%i",&idade);
	
	idade >= 18 ? printf("\nMaior de idade") : printf("\nMenor de idade");
	
return 0;
}


//?
//|lado verdadeiro| idade é maior ou igual a 18 ? se sim printa"maior" : |lado falso| se nao printa"menor"
