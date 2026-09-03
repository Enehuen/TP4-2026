/*
 * Entrega 4 - Ejercicio 4
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 * -----------------
 * Ezequiel Nehuen
 * Enehuen
 */

/**
 * @brief Funcion que mediante la descompocision de numeros en factores primos
 * Utilizando la funcion "es_primo" ubicada en ejercicio1/ejercicio.h y realizando la multiplicacion 
 * de los respectivos numeros primos que den como resultado 0 al modulo de los dos parametros y la iteracion.
 * determinando asi el maximo comun divisor.
 * @param primer_numero ingresado para determinar sus divisores
 * @param segundo_numero ingresado para determinar sus divisores
 * @note Intentar ejecutar numeros negativos o ingresar 0 como segundo parametro dara -1 como resultado
 *          o si ambos numeros son 0.
 * @return resultado de la multiplicacion sucesiva de numeros primos.
 */
int maximo_comun_divisor(int primer_numero, int segundo_numero);

/**
 * @brief Funcion que mediante la descompocision de numeros en factores primos
 * Utilizando la funcion "es_primo" ubicada en ejercicio1/ejercicio.h y realizando la multiplicacion 
 * de los respectivos numeros primos que den como resultado 0 a los siguientes 3 escenarios
 * 1- modulo de los dos parametros y la iteracion.
 * 2- modulo de el primer parametro con la iteracion 
 * 3- modulo del segundo parametro con la iteracion. 
 * determinando asi el minimo comun multiplo.
 * @param primer_numero ingresado para determinar sus multiplos
 * @param segundo_numero ingresado para determinar sus multiplos
 * @note Intentar ejecutar numeros negativos o ingresar 0 como parametros dara -1 como resultado.
 * @return resultado de la multiplicacion sucesiva de numeros primos.
 */
int minimo_comun_multiplo(int primer_numero, int segundo_numero);
