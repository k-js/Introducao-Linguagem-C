
//  Faca um algoritmo que recebe como entrada tres numeros reais a, b, c. A saıda deve ser:
 // resultado de (a/4+b²)8∗c.

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

     calc =  ((a / (4 + pow(b,2))) / (8*c)) ;
    
    
   printf(" valor da equação  = %f" , calc);
    return 0;
}

