#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"");
	
	float nt1,nt2,nt3,media;
	printf("\nDigite as 3 notas do aluno com espaços\n>:");
	scanf("%f %f %f",&nt1,&nt2,&nt3);
	
	printf("\n nota 1=%.1f, nota 2=%.1f, nota 3=%.1f",nt1,nt2,nt3);
	media =((nt1*2)+nt2+nt3)/4;

	printf("\nA media é de %.1f",media);
	
	return 0;
}

/*media ponderada varia de acordo com o peso das notas EX: na linha 9 se a nota 1 tivesse o peso de 3 intt seria dividido por
5 e n por quatro e assim por diante
*/
