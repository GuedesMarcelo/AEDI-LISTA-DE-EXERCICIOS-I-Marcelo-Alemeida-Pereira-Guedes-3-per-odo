  #include <stdio.h>
  #include <math.h>  
 
   int main() {
    float num1, num2;
    float produto_dobro, soma_triplo, raiz_quadrada;
    printf("Digite o primeiro n�mero: ");
    scanf("%f", & num1);
    printf("Digite o segundo n�mero: ");
    scanf("%f", & num2);
    produto_dobro = 2 * num1;
    soma_triplo = (3 * num1) + (num2 / 2);
    raiz_quadrada = sqrt(num1 + num2);
    printf("Produto do dobro do primeiro n�mero: %.2f\n", produto_dobro);
    printf("Soma do triplo do primeiro n�mero com a metade do segundo: %.2f\n", soma_triplo);
    printf("Raiz quadrada da soma dos dois n�meros: %.2f\n", raiz_quadrada);
    return 0;
}

