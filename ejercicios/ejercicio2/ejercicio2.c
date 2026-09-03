/*
 * Entrega 4 - Ejercicio 2
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 * -----------------
 * Ezequiel Nehuen
 * Enehuen
 */
#include <stdio.h>

int fibonacci(int posicion)
{
    int inicio = 0;
    int secuencia = 1;
    int resultado;
    int contador = 1;
    int temp;
    if (posicion == 0)
    {
        resultado = inicio;
    }
    else if (posicion == 1)
    {
        resultado = secuencia;
    }
    else if (posicion > 1)
    {
        while (contador < posicion)
        {
            temp = inicio + secuencia;
            inicio = secuencia;
            secuencia = temp;
            contador++;
        }
        resultado = temp;
    }
    else
    {
        resultado = -1;
    }
    return resultado;
}

int suma_fibonacci(int hasta_posicion)
{
    int temp;
    int resultado = 0;
    if (hasta_posicion < 0)
    {
        resultado = -1;
    }
    else
    {
       for (int i = 0; i <= hasta_posicion; i++)
        {
            temp = fibonacci(i);
            resultado += temp;
        }    
    }
    return resultado;
}