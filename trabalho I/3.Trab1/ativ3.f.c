
//  Faca um algoritmo que recebe como entrada tres numeros reais a, b, c. A saıda deve ser:
 // f) O resultado de log10(a) ∗ (c + log2(b)).


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

     calc =  (log10(a) * (c + log2(b)));
    
    
   printf(" valor da equação  = %f" , calc);
    return 0;
}

