#include <stdio.h>
#include <conio.h> //getch getchar e etc nessa lib  <<

int main(void){
	
	char a,b,c;
	
	 /*//getchar(); getche(); //getch e getche realiza a captura na hora do input // 
								e voce nao ve o caractere que digitou com a getch
								o getchar so realiza a leitura do primeiro caracter ou seja
								o usuraio pode digitar varios caracteres mais oq vai 
								ficar armazenado na variavel é o primeiro*/
	
	printf("Digite um caracter \n>: ");
	a = getch();
	printf("\n-----Leitura com getch: %c \n",a);
	
	printf("\nDigite um caracter \n>: ");
	b = getche();
	printf("\n-----Leitura com getche: %c \n",b);
	
	printf("\nDigite um caracter \n>: ");
	c = getchar();
	printf("\n-----Leitura com getchar: %c \n",c);
	
	return 0;
}
