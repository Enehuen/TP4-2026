/*
 * Entrega 4 - Ejercicio 2
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 * -----------------
 * Ezequiel Nehuen
 * Enehuen
 */

#include <stdio.h>
#include "ejercicio2.h"

int main(void) {
    int n = 7;
    printf("=== Ejercicio 2: Sucesion de Fibonacci ===\n");
    printf("Termino %d de Fibonacci: %d\n", n, fibonacci(n));
    printf("Suma de terminos hasta %d: %d\n", n, suma_fibonacci(n));
    return 0;
}
