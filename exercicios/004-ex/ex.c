//  Faça um algoritmo para receber um número qualquer e imprimir na tela se o número é par ou ímpar, positivo ou negativo.


#include<stdio.h>

int main(void){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero % 2 == 0){
        if(numero >= 0){
            printf("Numero Par Positivo");
        } else {
            printf("Numero Par Negativo");
        }    
    } else {
        if(numero > 0){
            printf("Numero Impar Positivo");
        } else {
            printf("Numero Impar Negativo");
        }
    }

    return 0;
}