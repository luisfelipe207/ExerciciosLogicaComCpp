#include <iostream>

int main() {
    int a, b;
    printf("Digite o primeiro número (0 ou 1): ");
    scanf("%d", &a);
    printf("Digite o segundo número (0 ou 1): ");
    scanf("%d", &b);
    int divisao = a / b;
    int resto = a % b;
    printf("Divisão: %d / %d = %d (Quociente), Resto: %d\n", a, b, divisao, resto); 
    return 0;
}
