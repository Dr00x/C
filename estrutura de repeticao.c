#include <stdio.h>

int main(void){
	int idade;
	
	for(int i = 1; i <= 10; i++){
		printf("\nInforme sua idade\n>:");
		scanf("%i",&idade);
		if(idade >= 18){
			printf("\nMaior de idade");
		}else{
			printf("\nMenor de idade");
		}
		
	} 
return 0;
}



// for variavel contadora , enquanto a condicao n for atendida, trocar ou almentar o valor
