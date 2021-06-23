/******************************************************************************
13. Leia uma sequencia de numeros, sendo que o final da sequencia sempre termina com 0. 
A saıda do programa e o maior numero da sequencia.
*******************************************************************************/

#include<stdio.h>
int main(){
    
int n , num = 1;
n = 0;

while( num != 0 ){
    scanf("%d",&num);
    if(num>n){
        n=num;
    }
}

printf("%d",n);
return 0;
}
