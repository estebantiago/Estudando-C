// Faça um algoritmo que receba um valor A e B, e troque o valor de A por B e o valor de B por A e imprima na tela os valores.

#include<stdio.h>

int main (void){
    int valorA, valorB, temp;

    printf("Digite valor A: ");
    scanf("%d", &valorA);


    printf("Digite valor B: ");
    scanf("%d", &valorB);

    printf("Valor A: %d\n", valorA);
    printf("Valor B:%d\n", valorB);

    temp = valorB;

    valorB= valorA;
    valorA = temp;

    printf("Valores Inverditos:\n");

    printf("Valor A: %d\n", valorA);
    printf("Valor B: %d", valorB);

 return 0;
 
}