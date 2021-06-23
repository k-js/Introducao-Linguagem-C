/******************************************************************************

Faca um algoritmo que recebe como entrada tres numeros reais a, b, c. A saıda deve ser:
a) O seno de a,b,c

*******************************************************************************/
#include <math.h>
#include <stdio.h>

int
main (void)
{
  float a;
  float b;
  float c;

  printf ("Digite 3 numeros reais \n");
  scanf ("%f", &a);
  scanf ("%f", &b);
  scanf ("%f", &c);

    a = sin(a);
    b = sin(b);
    c = sin(c);
    
    printf(" seno a: %f, seno b: %f, seno c: %f", a, b, c);
    
    return 0;
}
