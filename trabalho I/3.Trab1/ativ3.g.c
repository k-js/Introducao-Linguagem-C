/******************************************************************************

Faca um algoritmo que recebe como entrada tres numeros reais a, b, c. A saıda deve ser:
g) O resultado de a ∗ 0.3 + b ∗ 0.6 + c ∗ 0.1


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

     calc =  (a * 0.3) + (b * 0.6) + (c * 0.1);
    
   printf(" valor do equação  = %.0f" , calc);
    return 0;
}




