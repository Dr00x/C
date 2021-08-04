#include <stdio.h>

int main(void){

	char sexo;
	printf("\nDigite seu sexo [M/F] \n>:");
	scanf("%c",&sexo);
	
	
	if(sexo == 'M' || sexo == 'm'){
		printf("\n Masculino");
	}else if(sexo == 'F' || sexo == 'f'){
		printf("\n Feminino");
	}
    	
	return 0;
}


/* Operadores Lógicos

&& = and/E
|| = or /ou
! = not
*/


