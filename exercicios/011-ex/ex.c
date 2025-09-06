/*Faça um algoritmo que calcule o IMC (Índice de Massa Corporal) de uma pessoa, leia o seu peso e sua altura e imprima na tela sua condição de acordo com a tabela abaixo:

Fórmula do IMC = peso / (altura) ²
Tabela Condições IMC
Abaixo de 18,5   | Abaixo do peso
Entre 18,6 e 24,9 | Peso ideal (parabéns)
Entre 25,0 e 29,9 | Levemente acima do peso
Entre 30,0 e 34,9 | Obesidade grau I
Entre 35,0 e 39,9 | Obesidade grau II (severa)
Maior ou igual a 40 | Obesidade grau III (mórbida)

 */

 #include<stdio.h>

 int main(void){
    float peso, altura, imc;

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura*altura);

    if(imc < 18.5){
        printf("Abaixo do peso\n");
    } else if(imc > 18.5 && imc < 25 ){
        printf("Peso ideal (parabéns)\n");
    } else if(imc >= 25 && imc <30){
        printf("Levemente acima do peso\n");
    } else if(imc >=30 && imc <35){
        printf("Obesidade grau I\n");
    } else if(imc >= 35 && imc < 40){
        printf("Obesidade grau II (severa)\n");

    } else {
        printf("Obesidade grau III (mórbida)\n");
    }

     printf("Resultado do IMC:%.2f", imc);
        
       return 0;
 }