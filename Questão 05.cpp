#include <stdio.h>

    int main() {
    float custo_fabrica, custo_final;
    printf("Digite o custo de fábrica do carro: ");
    scanf("%f", & custo_fabrica);
    custo_final = custo_fabrica + (custo_fabrica * 0.28) + (custo_fabrica * 0.45);
    printf("O valor final a ser pago pelo consumidor é: R$ %.2f\n", custo_final);

    return 0;
}

