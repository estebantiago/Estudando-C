// Pedir ao usuario para digitar um numero e verificar se esse numero e par ou impar .

#include<stdio.h>

int main (){
    int numero;
    printf("Saiba se o numero e par ou impar! \n");

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if(numero % 2 == 0){
        printf("Numero Par!");
    } else {
        printf("Numero Impar!");
    }
}