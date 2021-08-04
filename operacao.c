#include <stdio.h>

int main(void){
	
	float a,b,res;
	
	printf("\nDigite dois valores >: ");
	scanf("%f %f",&a,&b);
	
	printf("\nO resultado da soma e %.2f ",a+b);
	printf("\nO resultado da sub. e %.2f",a-b);
	printf("\nO resultado da mult. e %.2f",a*b);
	printf("\nO resultado da div. e %.2f",a/b);
	return 0;
}
