/******************************************************************************

 2. Faca um algoritmo que escreve na tela a palavra que o usuario digitar como entrada.
*******************************************************************************/
#include <stdio.h>

int main(){
    char nome[30];
    printf("Digite uma palavra:\n");
    scanf("%s" , nome);
    printf("%s", nome); 
    return 0; 
}


