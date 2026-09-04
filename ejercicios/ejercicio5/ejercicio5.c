/*
 * Entrega 4 - Ejercicio 5
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 * -----------------
 * Nombre y Apellido
 * Usuario Github
 */
#include <stdio.h>

int contar_digitos(int numero)
{
    int cantidad = 1;
    int contador = 10;
    if (numero > 9 || numero < -9)
    {
        if (numero > 9)
        {
            while (contador < numero)
            {
                numero /= contador;
                cantidad++;
            }
        }
        else
        {
            int numero_negativo = -numero;
            while (contador < numero_negativo)
            {
                numero_negativo /= contador;
                cantidad++;
            }
        }
    }    
    return cantidad;
}

int sumar_digitos(int numero)
{
    int contador = 10;
    int suma = 0;
    if (numero > 0)
    {
        while (numero > 0)
        {
            suma += numero % contador;
            numero /= contador;
        }
    }
    else if (numero < 0)
    {
        int numero_negativo = -numero;
        while (numero_negativo > 0)
        {
            suma += numero_negativo % contador;
            numero_negativo /= contador;
        }
    }
    return suma;    
}

int es_capicua(int numero)
{
    int resultado = 0;
    int numero_invertido = 0;
    int contador = 10;
    int numero_temp = numero;
    int digito_temp;
    if (numero_temp < 0)
    {
        numero_temp = -numero_temp;
    }
    int numero_original = numero_temp;
    while (numero_temp > 0)
    {
        digito_temp = numero_temp % contador;
        numero_invertido = (numero_invertido * contador) + digito_temp;
        numero_temp /= contador; 
    }
    if (numero_invertido == numero_original)
    {
        resultado = 1;
    }
    
    return resultado;
}