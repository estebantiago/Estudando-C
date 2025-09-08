//  Faça algoritmo que leia o nome e a idade de uma peso e imprima na tela o nome da pessoa e se ela é maior ou menor de idade. 

#include<stdio.h>
#include<string.h>

#define TAM_NOME 50
#define MAIOR_IDADE 18


int main (void){
    char nome[TAM_NOME];
    int idade;

    printf("Digite seu nome:");
    fgets(nome, TAM_NOME,stdin);
    nome[strlen(nome) - 1] = '\0';


    printf("Digite sua idade:");
    scanf("%d", &idade);

    if(idade >= MAIOR_IDADE){
        printf("Maior de idade!");
    } else {
        printf("Menor de Idade!");
    }
    return 0;
}