#include <iostream>

int main() {
    int num;

    printf("digite um número");
    scanf("%d", &num);

    int resultado;

    resultado = (("%d\n", (num > 0) && (num % 2 == 0)));

    printf("%d\n", resultado);

    return 0;
}