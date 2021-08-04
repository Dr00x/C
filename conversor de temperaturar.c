#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"");
	
	int cels,far,kel;
	printf("\nQual a temperatura em celsius?\n>:");
	scanf("%i",&cels);
	
	far = 1.8 * cels + 32;
	kel = cels + 273;
	
	printf("O valor em celsio=%i , o valor em kelvin=%i , o valor em fahrenheit =%i",cels,kel,far);
	
	return 0;
}
