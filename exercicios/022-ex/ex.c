/*
Este programa le o salario bruto de uma pessoa, a taxa de imposto de renda e a taxa de inss. Em seguida, mostra o seguinte menu

 Escolha uma das opcoes abaixo:

  1: Salario Liquido
  2: Valor descontado pelo imposto de renda
  3: Valor descontado pelo Inss.

  O usuarui seleciona a opcao e o programa exibe o que o usuario deseja.

  Caso nenhuma das opcoes seja escolhida, imprime-se mensagem de erro.

  */

#include <stdio.h>

int main(void)
{
  float salarioBruto, tx_ir, tx_inss;
  float salarioLiquido, valor_ir, valor_inss;
  int opcao;

  printf("Informe o salario bruto, taxa IR e taxa INSS: ");
  scanf("%f %f %f", &salarioBruto, &tx_ir, &tx_inss);

  valor_ir = tx_ir*salarioBruto/100;
  valor_inss = tx_inss*salarioBruto/100;
  salarioLiquido = salarioBruto-valor_ir-valor_inss;

  printf("Escolha uma das opcoes abaixo: \n");

  printf("\t1 - Salario liquido \n");
  printf("\t2 - Valor descontado pelo imposto de renda. \n");
  printf("\t3 - Valor descontado pelo Inss.");
  scanf("%d", &opcao);
  
  switch (opcao){
    case 1: 
      printf("Seu salario liquido  %.2f Reais", salarioLiquido );
      break;
    case 2: 
      printf("Desconto de Imposto de Renda %.2f ", valor_ir);
      break;
    case 3: 
      printf("Desconto pelo INSS %.2f", valor_inss);
      break;
    
    default:
      printf("Opcao Invalida");
  }
  return 0;
}
