//  Faça um algoritmo que leia três notas obtidas por um aluno, e imprima na tela a média das notas.


#include<stdio.h>

int main(void){
   
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota:");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota:");
    scanf("%f", &nota2);
    
    printf("Digite a terceira nota:");
    scanf("%f", &nota3);

    media = (nota1+nota2+nota3) / 3;

    printf("Media: %.2f", media);

    return 0;
}