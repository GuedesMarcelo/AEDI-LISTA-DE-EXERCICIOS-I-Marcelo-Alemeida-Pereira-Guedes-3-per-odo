  #include <stdio.h>
  #include <math.h>  
 
   int main() {
    float num1, num2;
    float produto_dobro, soma_triplo, raiz_quadrada;
    printf("Digite o primeiro número: ");
    scanf("%f", & num1);
    printf("Digite o segundo número: ");
    scanf("%f", & num2);
    produto_dobro = 2 * num1;
    soma_triplo = (3 * num1) + (num2 / 2);
    raiz_quadrada = sqrt(num1 + num2);
    printf("Produto do dobro do primeiro número: %.2f\n", produto_dobro);
    printf("Soma do triplo do primeiro número com a metade do segundo: %.2f\n", soma_triplo);
    printf("Raiz quadrada da soma dos dois números: %.2f\n", raiz_quadrada);
    return 0;
}

