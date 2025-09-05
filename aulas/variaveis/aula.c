#include <stdio.h>

int main()
{
    int numero;                     // numero inteiro
    char cidade[20] = "Uberlandia"; // cadeia de caracteres
    char sexo;                      // um caractere;
    float numeroDecimal;            // para numeros decimais
    double numeroDecimal2;          // numeros decimais com mais precisao

    numero = 10;
    sexo = 'F';
    numeroDecimal = 1.5;
    numeroDecimal2 = 1.99999999999999;

    printf("%d \n", numero );
    printf("%s \n", cidade);
    printf("%c \n ",sexo);
    printf("%f \n", numeroDecimal);
    printf("%lf", numeroDecimal2);
   
}
