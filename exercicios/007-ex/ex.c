/*Faça um algoritmo que leia o valor do salário mínimo e o valor do salário de um usuário, calcule quantos salários mínimos esse usuário ganha e imprima na tela o resultado. (Base para o Salário mínimo R$ 1.293,20).*/

#include<stdio.h>
#define SAL_MIN 1293.00

int main(){
    float salarioUser, resultado;
    printf("Digite o valor do salario: ");
    scanf("%f", &salarioUser);
    
    resultado = salarioUser/SAL_MIN;

    printf("Voce recebe %.2f salarios minimos!", resultado);

    return 0;
}
