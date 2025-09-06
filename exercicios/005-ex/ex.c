/*
Faça um algoritmo que leia dois valores inteiros A e B, se os valores de A e B forem iguais, deverá somar os dois valores,
caso contrário devera multiplicar A por B. Ao final de qualquer um dos cálculos deve-se atribuir o resultado a uma variável C e
imprimir seu valor na tela.
*/
#include <stdio.h>

int main(void)
{
    int A, B, C;
    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    if (A == B)
    {
        C = A + B;
        printf("A e B sao iguais, somar: C=A+B: %d", C);
    }
    else
    {
        C = A * B;
        printf("A e B sao diferentes, multplicar: C=AxB: %d", C);
    }
    return 0;
}