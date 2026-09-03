/*
 * Entrega 4 - Ejercicio 3
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 * -----------------
 * Nombre y Apellido
 * Usuario Github
 */

#include <stdio.h>

long long factorial(int numero)
{   
    long long resultado = 1;
    if (numero == 0 || numero == 1)
    {
        resultado = 1;
    }
    else if (numero < 0)
    {
        resultado = -1;
    }
    else
    {
        for (long long i = 2; i <= numero; i++)
        {
            resultado *= i;
        }
    }
    
    return resultado;
}

long long combinatorio(int cantidad_elementos, int elementos_por_grupo)
{
    long long combinaciones;
    long long factorial_elementos = factorial(cantidad_elementos);
    long long factorial_grupos = factorial(elementos_por_grupo);
    if (elementos_por_grupo < 0 || elementos_por_grupo > cantidad_elementos || cantidad_elementos < 0)
    {
        combinaciones = -1;
    }
    else if (elementos_por_grupo == 0)
    {
        combinaciones = 1;
    }
    else
    {
        int resta_division = cantidad_elementos - elementos_por_grupo;
        long long division = factorial(resta_division) * factorial_grupos;
        combinaciones = factorial_elementos / division;
    }
    return combinaciones;
}