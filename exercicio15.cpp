#include <iostream>

int main() {
    int num1;
    int num2;
    printf("digite o primeiro número");
    scanf("%d", &num1);
    printf("digite o segundo número");
    scanf("%d", &num2);

     printf("%d\n", (num1 > num2)
      && (num1 < num2) && (num1 == num2));
    