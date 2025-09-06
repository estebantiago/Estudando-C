// Faça um algoritmo que leia dois valores booleanos (lógicos) e determine se ambos são VERDADEIRO ou FALSO.

#include<stdio.h>
#include<stdbool.h>

int main(void){
    bool valorA, valorB; // declarando que os valores sao booleanos

    int valorTempA, valorTempB; // declarando valores temporarios

    printf("Digite o primeiro valor Booleano: (0 para FALSO, 1 para VERDADEIRO!)");
    scanf("%d", &valorTempA);

    printf("Digite o segundo valor Booleano: (0 para FALSO, 1 para VERDADEIRO)");
    scanf("%d", &valorTempB);


// converte os valores inteiros para booleanos
    valorA = (valorTempA != 0);
    valorB = (valorTempB != 0);

    if(valorA && valorB) {
        printf("Ambos os valores sao VERDADEIROS!");
    } else if(!valorA && !valorB){
        printf("Ambos os valores sao FALSOS");
    } else {
        printf("Um eh VERDADEIRO e outro FALSO");
    }
    return 0;
}