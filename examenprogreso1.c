#include <stdio.h>

// Función que va a encontrar el número mayor
int encontrarMayor(int numeros[], int n) {
    int mayor = numeros[0];
    for (int i = 1; i < n; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }
    return mayor;
}

// Creo la función principal
int main() {
    int n;
    printf("Ingrese el número de datos de entrada: ");
    scanf("%d", &n);

    // Creo una matriz para almacenar a todos los números enteros
    int numeros[n];

    // Aquí se pide al usuario que ingrese los números enteros
    printf("Ingrese los números enteros: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
    }

    // Se llama a la función para encontrar el número mayor
    int mayor = encontrarMayor(numeros, n);

    // Procede a imprimir el resultado
    printf("El número mayor es: %d\n", mayor);

    return 0;
}

