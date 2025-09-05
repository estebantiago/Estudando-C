//Declarar a variavel "X" como um numero inteiro, atribuir um valor, declarar um nome e imprimir o nome "X" vezes.

#include<stdio.h>

int main (){
    char nome[] = "Maria";
    int x = 3;

    for(int i = 0; i < x; i++){
        printf("%s\n", nome);
    }

}