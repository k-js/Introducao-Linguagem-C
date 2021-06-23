/******************************************************************************
6. Faca um algoritmo que recebe como entrada dois numeros reais a, b. A saıda deve ser
estes numeros em ordem crescente.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main(void){
    
    float a, b;
    printf("Declare 2 numeros \n");
    scanf("%f" ,&a);
    scanf("%f" ,&b);
    
    if (a < b){
            printf("%.f  %.f \n", a ,b);
    }else {
            printf("%.f  %.f \n", b, a);
    }
    
    return 0;
}


