/******************************************************************************
7. Fac¸a um algoritmo que recebe como entrada tres n ˆ umeros reais a, b, c. Na sa ´ ´ıda deve
informar se a soma de a + b e maior que c.
*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main(void){
    
    float a, b, c , soma;
    printf("Declare 3 numeros reais A, B, C \n");
    scanf("%f" ,&a);
    scanf("%f" ,&b);
    scanf("%f" ,&c);
    
    soma = a + b;
    
    //if (soma == c)
            //printf(" Os resultados são iguais");
    //else 
       
        if (soma > c)
           printf("O  valor da soma (A + B = %.f) é maior que C (C = %.f)", soma , c);
        
    //else 
         //printf("O maior valor e C (C = %.f)", c);
           
    
    return 0;
}



