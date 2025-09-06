// Faça um algoritmo que receba um número inteiro e imprima na tela o seu antecessor e o seu sucessor.

#include<stdio.h>

int main(void){
    int numero, antecessor, sucessor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    antecessor = numero - 1;
    sucessor = numero + 1;

    printf("Numero Sugerido:%d \n", numero);
    printf("Numero Antecessor: %d\n", antecessor);
    printf("Numero Sucessor:%d", sucessor);

    return 0;
}