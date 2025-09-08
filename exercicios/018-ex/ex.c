// Faça um algoritmo que leia uma temperatura em Fahrenheit e calcule a temperatura correspondente em grau Celsius. Imprima na tela as duas temperaturas.

//Fórmula: C = (5 * ( F-32) / 9)



#include<stdio.h>

int main (){
    int fahrenheit, celcius;

    printf("Conversor de FAHRENHEIT para GRAUS C\n");

    printf("Digite quantos FAHRENHEIT :");
    scanf("%d", &fahrenheit);

    celcius = (5 *(fahrenheit-32) / 9);

    printf("Valor convertido: %d Graus Celcius!", celcius);
    
    return 0;

}


