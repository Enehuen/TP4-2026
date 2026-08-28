/*
 * Entrega 4 - Ejercicio 9
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 * -----------------
 * Nombre y Apellido
 * Usuario Github
 */

#include <stdio.h>
#include "ejercicio9.h"

int main(void) {
    float c = 25.0f;
    printf("=== Ejercicio 9: Conversion de Temperaturas ===\n");
    printf("Celsius: %.2f C\n", c);
    printf("Fahrenheit: %.2f F\n", celsius_a_fahrenheit(c));
    printf("Kelvin: %.2f K\n", celsius_a_kelvin(c));
    return 0;
}
