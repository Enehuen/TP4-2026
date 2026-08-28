/*
 * Entrega 4 - Ejercicio 6
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 * -----------------
 * Nombre y Apellido
 * Usuario Github
 */

#include <stdio.h>
#include "ejercicio6.h"

int main(void) {
    int b = 2, e = 10, n = 50;
    printf("=== Ejercicio 6: Potenciacion y Raiz Entera ===\n");
    printf("%d^%d = %lld\n", b, e, potencia(b, e));
    printf("Raiz entera de %d: %d\n", n, raiz_cuadrada_entera(n));
    return 0;
}
