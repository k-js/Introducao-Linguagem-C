/******************************************************************************
5. Escreva um programa que verifique se um numero digitado pelo usuarioe menor, igual ou maior que zero.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main(void){
    
    float num;
    printf("Digite um numero real \n");
    scanf("%f" ,&num);
     
    
    if (num < 0){
            printf(" seu numero %f é menor que zero", num );
    }else if (num > 0){
            printf(" seu numero %f é maior que zero", num);
    }else{
            printf(" seu numero %f é igual a que zero", num);
    }
     return 0;
}


