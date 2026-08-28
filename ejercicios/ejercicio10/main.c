/*
 * Entrega 4 - Ejercicio 10
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 * -----------------
 * Nombre y Apellido
 * Usuario Github
 */

#include <stdio.h>
#include "ejercicio10.h"

int main(void) {
    float r = 5.0f, b = 4.0f, h = 3.0f;
    printf("=== Ejercicio 10: Geometria Plana ===\n");
    printf("Circulo radio %.2f -> Perimetro: %.2f, Area: %.2f\n", r, perimetro_circulo(r), area_circulo(r));
    printf("Triangulo base %.2f, altura %.2f -> Area: %.2f\n", b, h, area_triangulo(b, h));
    printf("Catetos %.2f y %.2f -> Hipotenusa: %.2f\n", b, h, calcular_hipotenusa(b, h));
    return 0;
}
