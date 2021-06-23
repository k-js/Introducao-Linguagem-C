/******************************************************************************

4. Implemente um algoritmo que resolve a equacao de bascara
*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main(void){
    
    float a, b, c;
    printf("Digite os valores de a, b, c\n");
    scanf("%f" ,&a);
     scanf("%f" ,&b);
      scanf("%f" ,&c);
    
    float delta = pow(b,2) - 4 * a * c;
    
    if ((delta > 0) && (a != 0)){
       float x1 = (- b + sqrt(delta)) / (2 * a);
       float x2 = (- b - sqrt(delta)) / (2 * a);
       printf("x1 = %f e x2 = %f \n" , x1, x2);
    }else {
       printf("Equação nao tem raiz");
    }
    
    return 0;
}
