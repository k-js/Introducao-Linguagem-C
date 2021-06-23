/******************************************************************************
12. Escreva um programa que mostre na tela os numeros primos no intervalo de 0 a 100.
*******************************************************************************/

#include<stdio.h>
#include <stdio.h>

int main ()
{
  int cont1, cont2, div=0;
  
  for(cont2=1; cont2<=100; cont2++, div = 0){
    
    for(cont1=1; cont1<=100; cont1++){
      if (cont2%cont1==0){
	div++;
      }
    }
    if(div==2)
      printf ("%i \n",cont2);
  }  
  
  
}