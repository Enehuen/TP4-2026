/*
 * Entrega 4 - Ejercicio 7
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 * -----------------
 * Nombre y Apellido
 * Usuario Github
 */

#include <stdio.h>
#include "ejercicio7.h"

int main(void) {
    int dec = 25;
    long long bin = decimal_a_binario(dec);
    printf("=== Ejercicio 7: Conversion Decimal y Binario ===\n");
    printf("Decimal: %d -> Binario: %lld\n", dec, bin);
    printf("Binario: %lld -> Decimal: %d\n", bin, binario_a_decimal(bin));
    return 0;
}
