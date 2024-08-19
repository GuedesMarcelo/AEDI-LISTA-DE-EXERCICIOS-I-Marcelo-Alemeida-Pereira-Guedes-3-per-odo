#include <stdio.h>

    int main() {
    float tempo, velocidade, distancia, litros_usados;
    float consumo_por_litro = 12.0;  
    printf("Digite o tempo gasto na viagem (em horas): ");
    scanf("%f", & tempo);
    printf("Digite a velocidade média durante a viagem (em Km/h): ");
    scanf("%f", & velocidade);
    distancia = tempo * velocidade;
    litros_usados = distancia / consumo_por_litro;
    printf("A quantidade de litros de gasolina utilizados na viagem é: %.2f litros\n", litros_usados);

    return 0;
}

