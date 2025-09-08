//  Faça um algoritmo que leia três valores que representam os três lados de um triângulo e verifique se são válidos, determine se o triângulo é equilátero, isósceles ou escaleno.


#include<stdio.h>

int main(void){

    int a, b, c,  valor1, valor2, valor3;
    

    valor1 = (a + b) > c;
    valor2 = (a + c) > b;
    valor3 = (b + c) > a;

    printf("Digite o valor a: ");
    scanf("%d", &a);

    printf("Digite o valor b: ");
    scanf("%d", &b);

    printf("Digite o valor c: ");
    scanf("%d", &c);

    if(valor1 && valor2 && valor3){
        printf("Os lados %d, %d e %d, formam um triangulo valido!\n", a, b, c);
        if(a == b && b == c){
            printf("Classificacao: Triangulo Equilatero!");
        } else if(a == b || a == c || b == c){
        printf("Classificacao: Triangulo Isosceles!");
         } else {
            printf("Classificacao: Triangulo Escaleno!");
         }

    } else {
        printf("Os lados %d, %d e %d, nao formam um triangulo valido!", a, b, c);
    }
    
    return 0;
}