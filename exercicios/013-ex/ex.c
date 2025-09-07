//  Faça um algoritmo que leia quatro notas obtidas por um aluno, calcule a média das nota obtidas, imprima na tela o nome do aluno e se o aluno foi aprovado ou reprovado. Para o aluno ser considerado aprovado sua média final deve ser maior ou igual a 7.

#include <stdio.h>
#include <string.h>

#define TAM_NOME 50

int main(void)
{
    char nome[TAM_NOME];
    float nota1, nota2, nota3, nota4, media;

    printf("Digite seu nome: ");
    fgets(nome, TAM_NOME, stdin);
    nome[strlen(nome) - 1] = '\0';

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    media = (nota1+nota2+nota3+nota4)/4;

    if(media>=7){
        printf(" Aluno: %s\n", nome );
        printf("Media: %.2f\n", media);
        printf("Aprovado");
    } else {
        printf("Aluno: %s\n", nome);
        printf("Media: %.2f\n", media);
        printf("Reprovado");
    }
    return 0;
}