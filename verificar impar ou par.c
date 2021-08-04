#include <stdio.h>

int main(void){
	int n;
	
	printf("\nQual numero voce deseja conferir?\n>:");
	scanf("%i",&n);
	
	if(n %2 != 0){
		printf("e impar",n);
	}else{
		printf("e par");
	}
	
	return 0;
}
