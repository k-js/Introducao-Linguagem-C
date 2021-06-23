/******************************************************************************

Faca um algoritmo que recebe como entrada tres numeros reais a, b, c. A saıda deve ser:
d) A media entre a, b, c

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

     calc= (a + b + c) / 3;
    
   printf(" valor da media = %f" , calc);
    return 0;
}



