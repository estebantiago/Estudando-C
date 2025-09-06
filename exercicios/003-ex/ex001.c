#include<stdio.h>

int main (){

    float nota1, nota2, nota3;
    

    printf("Digite o valor das notas! \n ");

    printf("Primeira Nota: ");
    scanf("%f",&nota1);

    printf("Segunda Nota: ");
    scanf("%f", &nota2);

    printf("Terceira Nota: ");
    scanf("%f", &nota3);

    float soma = nota1 + nota2 + nota3;
    float media = soma / 3;

    printf(" Media: %.2f", media);
}