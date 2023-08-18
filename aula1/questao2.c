#include <stdio.h>

int main() 
{
    float num1, num2, soma, subtracao, divisao;
  
    printf ("Digite o numero 1: " ); 
    scanf  ("%f", &num1);
    printf ("Digite o numero 2: " ); 
    scanf  ("%f", &num2);
    soma       = num1 + num2;
    subtracao  = num1 - num2;
    divisao    = num1 / num2;

    printf ("Soma: %.2f\n", soma);
    printf ("Subtração: %.2f\n", subtracao);
    printf ("Divisão: %.2f\n", divisao);

    return 0;
}