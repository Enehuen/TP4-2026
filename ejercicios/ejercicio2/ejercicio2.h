/*
 * Entrega 4 - Ejercicio 2
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 * -----------------
 * Ezequiel Nehuen
 * Enehuen
 */

#ifndef EJERCICIO2_H
#define EJERCICIO2_H

/**
 * @brief Funcion que mediante la iteracion realiza una suma sucesiva del primer termino con el segundo.
 * 
 * @param posicion hasta donde llega la iteracion
 * @note Intentar ejecutar numeros negativos dara como resultado codigo de error -1.
 * @return el numero correspondiente a la posicion en la sucesion de fibonacci.
 */

int fibonacci(int posicion);

/**
 * @brief Funcion que mediante la iteracion realiza una suma sucesiva de los numeros de fibonacci hasta la posicion indicada.
 * 
 * @param hasta_posicion que se realiza la suma
 * @note Intentar ejecutar numeros negativos dara como resultado codigo de error -1.
 * @return suma de todos los factores hasta la posicion indicada.
 */
int suma_fibonacci(int hasta_posicion);

#endif