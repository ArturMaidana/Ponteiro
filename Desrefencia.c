#include <stdio.h>

int main() {
    int numero = 10;

    int *ponteiro = &numero;

    printf("Valor original: %d\n", numero);

    *ponteiro = 20;

    printf("Novo valor: %d\n", numero);

    return 0;
}
