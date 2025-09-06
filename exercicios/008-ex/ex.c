//  Faça um algoritmo que leia um valor qualquer e imprima na tela com um reajuste de 5%.

#include <stdio.h>

int main(void)
{
    int valor, porcentagem, valorReajustado;
    float resultado;

    printf("Digite o valor: ");
    scanf("%d", &valor);

    printf("Digite a porcentagem: ");
    scanf("%d", &porcentagem);

    resultado = valor *((float) porcentagem /100);

    
    valorReajustado = valor + resultado;
    printf("Valor Reajustado: %d", valorReajustado);
 
    return 0;
}