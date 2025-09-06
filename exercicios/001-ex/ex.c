//  Faça um algoritmo que leia os valores de A, B, C e em seguida imprima na tela a soma entre A e B é mostre se a soma é menor que C.

#include <stdio.h>

int main(void)
{
    int A, B, C, soma;
    printf("Digite o primeiro numero: ");
    scanf("%d", &A);

    printf("Digite o segundo numero: ");
    scanf("%d", &B);

    printf("Digite o terceiro numero: ");
    scanf("%d", &C);

    soma = A+B;
    
    printf("Soma A + B = %d \n",soma);

    if(soma > C){
        printf("A Soma entre A e B eh maior que C. \n");
    } else {
        printf("A Soma entre A e B eh menor que C. \n");
    }
    printf("Valor de C: %d", C);
    return 0;
}