#include <stdio.h>

void mostrarMultiplosDeCinco(int numero) {
    int i;
    printf("Los múltiplos de 5 entre 1 y %d son: ", numero);
    for (i = 1; i <= numero; i++) {
        if (i % 5 == 0) {
            printf("%d ", i);
        }
    }
}

int main() {
    int numero;
    printf("Ingrese un número entero: ");
    scanf("%d", &numero);
    mostrarMultiplosDeCinco(numero);
    return 0;
}
