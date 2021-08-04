#include <stdio.h>
#define PI 3.14

int main(void){
    float circunferencia,diametro;
    
    printf("\nQual diametro?\n>:");
    scanf("%f",&diametro);
    circunferencia = PI * diametro;
    
    printf("\nA circunferencia e de %f",circunferencia);

    return 0;
}
