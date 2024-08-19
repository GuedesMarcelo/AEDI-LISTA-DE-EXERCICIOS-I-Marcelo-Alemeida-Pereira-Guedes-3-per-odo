  #include <stdio.h>

    int main() {
    float peso_peixe;   
    float excesso;       
    float multa;         
    printf("Digite a quantidade de Kg de peixe pescado: ");
    scanf("%f", & peso_peixe);
    excesso = 0;
    multa = 0;
    if (peso_peixe > 50) {
    excesso = peso_peixe - 50;  
        if (excesso <= 10) {
            multa = 4.0;  
    } else {
    multa = 4.0 + (excesso - 10) * 0.50;}
    }
    printf("Excesso de peso: %.2f Kg\n", excesso);
    printf("Multa a pagar: R$ %.2f\n", multa);

    return 0;
}

