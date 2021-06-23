/******************************************************************************
14. Faca um algoritmo que calcula n!
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int fatrec(int n) {
 int f;
 printf("\nchamando fatorial de %10d", n);
 if (n <= 0) return 1;
 f = n * fatrec(n-1);
 printf("\nfeita a multiplicacao por %10d", n);
 return f;
}
/* dado n>=0 calcular o fatorial de n usando fatrec */
int main() {
 int n; /* numero dado */
 /* ler o n */
 printf("digite o valor de n:");
 scanf("%d", &n);
 /* calcule e imprima o resultado de fatorial de n */
 printf("\n\nfatorial de %10d = %10d\n", n, fatrec(n));
 
 return 0;
}