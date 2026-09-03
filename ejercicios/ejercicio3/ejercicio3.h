/*
 * Entrega 4 - Ejercicio 3
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 * -----------------
 * Ezequiel Nehuen
 * Enehuen
 */

/**
 * @brief Funcion que mediante la iteracion realiza una suma sucesiva
 * entre los todos los numeros enteros desde 1 hasta el numero ingresado.
 * 
 * @param numero al cual se factoriza
 * @note Intentar ejecutar numeros negativos dara como resultado codigo de error -1.
 * @return resultado de la multiplicacion desde 1 hasta el numero.
 */
long long factorial(int numero);


/**
 * @brief Funcion que utilizando la funcion factorial, realiza el calculo correspondiente
 * para determinar todos las combinaciones posibles entre los parametros dados.
 * 
 * @param cantidad_elementos disponibles del conjunto inicial
 * @param elementos_por_grupo tomados del conjunto inicial
 * @note Intentar ejecutar numeros negativos en ambos param dara como resultado codigo de error -1.
 *          Si elementos_por_grupo es mayor a cantidad de elementos dara como resultado codigo de error -1.
 * @return cantidad de combinaciones posibles entre los parametros.
 */
long long combinatorio(int cantidad_elementos, int elementos_por_grupo);