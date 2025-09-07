/* Faça um algoritmo que leia o valor de um produto e determine o valor que deve ser pago, conforme a escolha da forma de pagamento pelo comprador e imprima na tela o valor final do produto a ser pago. Utilize os códigos da tabela de condições de pagamento para efetuar o cálculo adequado.

 Tabela de Código de Condições de Pagamento
 1 - À Vista em Dinheiro ou Pix, recebe 15% de desconto

 2 - À Vista no cartão de crédito, recebe 10% de desconto

 3 - Parcelado no cartão em duas vezes, preço normal do produto sem juros

 4 - Parcelado no cartão em três vezes ou mais, preço normal do produto mais juros de 10%*/

#include <stdio.h>

int main(void)
{
    float precoProduto, valorFinal, desconto, juros;
    int formaPagamento;

    printf("Digite o valor do produto:");
    scanf("%f", &precoProduto);

    printf("\t Escolha a Forma de Pagamento: \n");
    printf("1 - A Vista em Dinheiro ou Pix, recebe (15%% de desconto) \n");
    printf("2 - A Vista no cartao de credito, recebe (10%% de desconto)\n");
    printf("3 - Parcelado no cartao em duas vezes, preco normal do produto sem juros\n");
    printf("4 - Parcelado no cartao em tres vezes ou mais, preco normal do produto mais juros de 10%%\n");
    scanf(" %d", &formaPagamento);

    switch (formaPagamento)
    {
    case 1:
        desconto = precoProduto * ((float)15 / 100);
        valorFinal = precoProduto - desconto;
        break;
    case 2:
        desconto = precoProduto *((float)10/100);
        valorFinal = precoProduto - desconto;
        break;
    case 3:
        valorFinal = precoProduto;
        break;
    case 4: 
        juros = precoProduto *((float)10/100);
        valorFinal = precoProduto+juros;
        break;
    default:
        printf("Escolha uma opcao valida!");
        return 1;
    }
    

    printf("Valor final a ser pago: %.2f", valorFinal);
    return 0;
}

