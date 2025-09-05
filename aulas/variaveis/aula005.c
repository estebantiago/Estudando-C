
#include <stdio.h>
#include <string.h>

// definindo constantes
#define TAM_NOME 50
#define TAM_END 100
#define TAM_CPF 15

int main(void)
{
    char nome[TAM_NOME];
    char endereco[TAM_END];
    char cpf[TAM_CPF];

    printf("Informe seu nome: ");
    fgets(nome, TAM_NOME, stdin);
    nome[strlen(nome) - 1] = '\0';

    printf("Informe seu endereco: ");
    gets(endereco);
    printf("Informe seu CPF: ");
    fgets(cpf, TAM_CPF, stdin);

    printf("Nome: %s \n", nome);
    printf("Endereco:%s \n", endereco);
    printf("CPF: %s", cpf);
}