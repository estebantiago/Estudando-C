// Este programa le o sexo, idade e salario de uma pessoa e imprime os valores lidos.

#include<stdio.h>

int main(void){
    int idade;
    float salario;
    char sexo;

    printf("Quantos anos voce tem ? \n ");
    scanf("%d",&idade);

    printf("Qual o seu salario ? \n");
    scanf("%f",&salario);

    printf("Qual seu sexo ? F | M \n");
    scanf(" %c",&sexo);


    printf("Voce tem %d anos, ganha R$%.2f, e eh do genero %c",idade, salario, sexo);
    return 0;
}
