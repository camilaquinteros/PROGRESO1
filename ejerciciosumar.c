#include<stdio.h>

int sumar(int a, int b)
{
    int resultado = a + b;
    return resultado;
}

int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("Este programa suma 2 numeros\n");
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
     printf("Ingrese el segundo numero: " );
    scanf("%d", &num2);
    int res = sumar(num1,num2);
    //printf("hola mundo\n");//
    printf(" El resultado de la suma es %d", res);
    
    return 0;
}