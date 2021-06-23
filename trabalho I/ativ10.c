/******************************************************************************
10. Escreva um programa que mostre todos os numeros pares no intervalo de 1 a 40 de 
forma decrescente, utilizando o comando whil
*******************************************************************************/
#include <stdio.h>
#include <math.h>


int main() {
    int a = 1;

    while (a <= 40)
    {

       if (a%2==0)
       {
          printf ("%d\n", a);   
       }

       a++; 
     }


return 0;	
}

    
    
    