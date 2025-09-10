// Faça um algoritmo que leia dois valores inteiros A e B, imprima na tela o quociente e o resto da divisão inteira entre eles.

#include <stdio.h>

int main()
{
    int valorA, valorB, quociente, restoDivisao;

    printf("Digite o valor A: ");
    scanf("%d", &valorA);

    printf("Digite o valor B: ");
    scanf("%d", &valorB);

    if (valorB == 0)
    {
        printf("ERRO, digite novamente uma divisao valida!");
    }
    else
    {
        quociente = valorA / valorB;
        restoDivisao = valorA % valorB;

        printf("Quociente: %d\n", quociente);
        printf("Resto da divisao: %d", restoDivisao);
        return 0;
    }
}