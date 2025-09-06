// Faça um algoritmo que leia três valores inteiros diferentes e imprima na tela os valores em ordem decrescente.


#include<stdio.h>

int main(void){
    int a, b, c;

  printf("Digite os 3 valores: ");
  scanf("%d %d %d", &a, &b, &c);

  if(a > c){
    int temporario = c;
    c = a;
    a = temporario;
  } 
  if(a > b){
    int temporario = b;
    b = a;
    a = temporario;
  }
  if(b > c){
    int temporario = c;
    c = b;
    b = temporario;
  }

  printf("%d %d %d", a, b,c);


}