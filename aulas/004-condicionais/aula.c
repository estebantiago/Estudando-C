#include<stdio.h>


int main (void){
    int num1;

    printf("Digite um numero inteiro : ");
    scanf("%d", &num1);

    if(num1 % 2 == 0){
        printf("Numero Par");
    } else {
        printf("Numero Impar");
    }

 return 0;
}