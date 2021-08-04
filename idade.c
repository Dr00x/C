#include <stdio.h>

int main(void){
	int idade;
	/*scanf pega o input do usuario até o espaco se exister algm espaco 
	ele vai armazenar ate so o espaco Tipo de dado mascara %i ou %d é para int*/
	printf("\nDigite Sua Idade: ");
	scanf("%i", &idade);
	
	printf("\n sua idade e %i anos",idade);
	return 0;
}
