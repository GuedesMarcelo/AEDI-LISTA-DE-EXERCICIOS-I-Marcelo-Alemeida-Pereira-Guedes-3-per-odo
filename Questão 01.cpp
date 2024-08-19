  #include <stdio.h>

   int main() {
    int lado, area;
    printf("Digite o valor do lado do quadrado: ");
    scanf("%d", & lado);
    area = lado * lado;
    printf("O dobro da área do quadrado é: %d\n", 2 * area);
    return 0;
}

