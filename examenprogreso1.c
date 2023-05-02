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



