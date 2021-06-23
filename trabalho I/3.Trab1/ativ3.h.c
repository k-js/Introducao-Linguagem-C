/******************************************************************************

3. Faca um algoritmo que recebe como entrada tres numeros reais a, b, c. A saıda deve ser 
h) O resultado de a^2 + b^4 + c^9


*******************************************************************************/
#include <math.h>
#include <stdio.h>

int
main (void)
{
  float a, b, c, calc;

  printf ("Digite 3 numeros reais \n");
  scanf ("%f", &a);
  scanf ("%f", &b);
  scanf ("%f", &c);

     calc =  pow(a,2) + pow(b,4) + pow(c,9);
    
   printf(" valor do equação  = %.0f" , calc);
    return 0;
}




