#include<stdio.h>
#include<stdbool.h>


int main (void){
    int num1;

    bool eh_impar;

    printf("Digite um numero inteiro : ");
    scanf("%d", &num1);

    eh_impar = num1%2;

    if(!eh_impar){
        printf("Numero Par");
    } else {
        printf("Numero Impar");
    }

 return 0;
}