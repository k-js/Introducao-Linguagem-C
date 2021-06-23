
//  Faca um algoritmo que recebe como entrada tres numeros reais a, b, c. A saıda deve ser:
 // O resultado de √cos(a) + b10 + tg(c)

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

     calc =  sqrt(cos(a)) + pow(b,10) + tan(c));
    
    
   printf(" valor da equação  = %f" , calc);
    return 0;
}

