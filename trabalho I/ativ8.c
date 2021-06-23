/******************************************************************************
8. Faca um algoritmo que recebe como entrada tres notas de prova de uma disciplina a, b, 
c. Na saıda deve informar a media e se o aluno esta aprovado ou reprovado (aprovado 
media maior que 70).
*******************************************************************************/
#include <stdio.h>
#include <math.h>


int main(){
    
float nota1, nota2, nota3, media;

printf("Notas: Disciplina computação II \n");
scanf("%f",&nota1);
scanf("%f",&nota2);
scanf("%f",&nota3);

media = (nota1 + nota2 + nota3) / 3;

if (media >= 70){
printf("MEDIA = %.f",media);
printf("\nAPROVADO\n");
}

else if ( media < 70){
printf("MEDIA = %.f\n",media);
printf("REPROVADO");
}	
return 0;	
}

    
    
    