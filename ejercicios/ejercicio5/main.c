/*
 * Entrega 4 - Ejercicio 5
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 * -----------------
 * Nombre y Apellido
 * Usuario Github
 */

#include <stdio.h>
#include "ejercicio5.h"

int main(void) {
    int num = 12321;
    printf("=== Ejercicio 5: Analisis y Transformacion de Digitos ===\n");
    printf("Numero: %d\n", num);
    printf("Cantidad de digitos: %d\n", contar_digitos(num));
    printf("Suma de digitos: %d\n", sumar_digitos(num));
    printf("Invertido: %d\n", invertir_numero(num));
    printf("Es capicua: %s\n", es_capicua(num) ? "SI" : "NO");
    return 0;
}
