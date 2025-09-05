#include<stdio.h>

int main (){

    int nota1, nota2, nota3;
    

    printf("Digite o valor das notas! \n ");

    printf("Primeira Nota: ");
    scanf("%d \n",&nota1);

    printf("Segunda Nota: ");
    scanf("%d \n", &nota2);

    printf("Terceira Nota: ");
    scanf("%d \n", &nota3);

    int soma = nota1 + nota2 + nota3;
    float media = soma / 3;

    printf(" Media: %2f", media);
}