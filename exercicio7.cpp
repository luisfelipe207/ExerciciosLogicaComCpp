#include <iostream>

int mai() {
    int a;
    printf("Digite o primeiro número ");
    scanf("%d", &a);

    bool resultado = ( a < 0);

    printf("resultado: %d/n", resultado);
    
    return true;
}
