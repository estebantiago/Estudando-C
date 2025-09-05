// Atribua o nome, sexo, salario e idade a uma pessoa em variaveis, em seguida imprima os valores destas variaveis.

#include<stdio.h>

int main (){
    char nome[] = "Tiago de Paula ";
    char sexo;
    float salario;
    int idade;

   sexo = 'F';
   salario = 3200.00;
   idade = 34;

   printf("Seus dados sao:\n");

   printf("Nome: %s \n", nome);
   printf("Sexo: %c \n", sexo);
   printf("Salario: %.2f \n", salario);
   printf("Idade:%d \n", idade);

   return 0;

}