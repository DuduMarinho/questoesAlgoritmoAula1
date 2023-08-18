/*Escrever um algoritmo que leia o nome de um vendedor, o seu salário
fixo e o total de vendas efetuada por ele no mês (em dinheiro). Sabendo
que este vendedor ganha 15% de comissão sobre suas vendas efetuadas,
informar o seu nome, o salário fixo e o salário no fim do mês. */
#include <stdio.h>

int main() 
{
    //declaração de variáveis
    char nome;
    float salarioFixo, comissao, totalDeGanhos;
    int totalDeVendasMes;
    
    //entrada do usuario 
    printf("Informe seu nome: ");
    scanf("%s", &nome);
    printf("Informe seu salário fixo: ");
    scanf("%f", &salarioFixo);
    printf("Quantidade de vendas no mês: ");
    scanf("%d", &totalDeVendasMes);

    //calculo de comissão
    comissao = totalDeVendasMes * 0.15;
    

}