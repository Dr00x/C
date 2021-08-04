#include <stdio.h>

int main(){
	int idade;
	char sexo;
	float altura;
	
	printf("\nQual sexo?[F  M] >: ");
	scanf(" %c", &sexo);
	
	printf("\nQual sua idade?>: ");
	scanf(" %i", &idade);
	
	printf("\nQual sua altura?>: ");
	scanf(" %f", &altura);
	
	printf("\nSeu sexo e %c, sua idade e %i e sua altura e %.2f",sexo,idade,altura);
	
	return 0;
	
}

//comentario

/*comentario de mais de uma linha
....................-------------
*/

/* int %d ou %i
float ou doble %f ou %E
char %c
long int %ld
unsigned long int %hu
unsigned int %u
unsigned short int %lua
*/
