/*Faça um programa que le os dois inteiros e imprimi:
- A soma dos dois numeros.
- O primeiro menos o segundo.
- A parte inteira da divisao pelo segundo.
- O resto da divisao do primeiro pelo segundo.
- A multiplicacao dos dois numeros.
- O primeiro dividido pelo segundo.*/

#include <stdio.h>

int main(void)
{
    int x, y;
    printf("Forneca os numeros: ");
    scanf("%d %d", &x, &y);

    printf("Soma : %d\n", x + y);
    printf("---------\n");
    printf("Subtracao: %d\n", x - y);
    printf("--------------------\n");
    printf("Divisao inteira x/y : %d\n", x/y);
    printf("--------------------\n");
    printf("Divisao inteira y/x: %d\n", y/x);
    printf("-------------------------\n");
    printf("Resto da divisao x por y: %d\n", x%y);
    printf("-------------------------\n");
    printf("Resto da divisao y por x: %d\n", y%x);
    printf("-------------------------\n");
    printf("Multiplicacao: %d\n", x*y);
    printf("-------------------------\n");
    printf("Divisao de x por y : %f\n", x / (float) y );
    printf("-------------------------\n");
    printf("Divisao de x por y : %f\n", y / (float) x );




}