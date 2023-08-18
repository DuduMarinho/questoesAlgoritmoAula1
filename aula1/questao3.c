#include <stdio.h>

int main() {
    float distancia, tanque, consumoMedio;

    printf("Digite a distancia total percorrida em km: ");
    scanf("%f", &distancia);
    printf("Digite o total de combustivel gasto em litros: ");
    scanf("%f", &tanque);

    consumoMedio = distancia / tanque;

    printf("O consumo medio do automovel foi de %.2f km/l\n", consumoMedio);

    return 0;
}