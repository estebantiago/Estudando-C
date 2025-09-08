// Faça um algoritmo que receba um valor inteiro e imprima na tela a sua tabuada

#include<stdio.h>

int main(void){
    int numero;

    printf("\tCriador de Tabuada!\n");

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for(int i = 1; i <= 10; i++){
      printf("%d x %d = %d\n",numero, i, numero*i);
    }   
    return 0;
}