/*
 * Entrega 4 - Ejercicio 1
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 * -----------------
 * Ezequiel Nehuen
 * Enehuen
 */

#ifndef EJERCICIO1_H
#define EJERCICIO1_H
/**
 * @brief Funcion que mediante la iteracion repasa los divisores posibles de un numero para determinar si es Primo o no
 * 
 * @param numero que se cuentan sus divisores
 * @note Intentar ejecutar numeros negativos o ingresar 0, dara como resultado codigo de error -1.
 * @return asigna para los numeros primos el numero 1, para los numeros no primos el 0.
 */
int es_primo(int numero);

/**
 * @brief Funcion que mediante la iteracion suma 1 a la base hasta encontrar 
 * el siguiente numero primo.
 * 
 * @param numero_base de la iteracion.
 * @note Como reutiliza la funcion es_primo, no permite numeros negativos, pero si el numero 0.
 * @return el siguiente numero primo al numero base.
 */
int proximo_primo(int numero_base);

/**
 * @brief Funcion que mediante iteracion realiza un recorrido entre todos los posibles divisores
 * de numero, para luego determinar cuales son los divisores correctos(Resto 0)
 * 
 * @param numero al que le determinan los divisores
 * @note Intentar ingresar el numero 0 dara como resultado 0.
 * @return el conteo de todos los divisores, en caso de no haber ninguno retorna 0.
 */
int cantidad_divisores(int numero);

#endif