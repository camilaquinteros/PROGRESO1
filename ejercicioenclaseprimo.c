#include<stdio.h>
int si_primo(int c)
{
     int i;
    if (c <= 1) 
    {
        return 0;
    }
    for (i = 2; i * i <= c; i++) 
        if (c % i == 0) {
            return 0;
        }
}
   
int main() {
    int numero1;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &numero1);
    if (si_primo(numero1)) {
        printf("%d es un numero primo.\n", numero1);
    } else {
        printf("%d no es un numero primo.\n", numero1);
    }
    return 0;
}