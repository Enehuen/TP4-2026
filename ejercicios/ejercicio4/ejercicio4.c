/*
 * Entrega 4 - Ejercicio 4
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 * -----------------
 * Ezequiel Nehuen
 * Enehuen
 */
#include "../ejercicio1/ejercicio1.c"

int maximo_comun_divisor(int primer_numero, int segundo_numero)
{
    int primos = 1;
    if (/*primer_numero <= 0 || */segundo_numero <= 0)
    {
        primos = -1;
    }
    else
    {
        for (int i = 0; i < (segundo_numero + 1); i++)
        {
            if (es_primo(i))
            {
                while ((primer_numero % i) == 0 && (segundo_numero % i) == 0)
                {
                    primer_numero /= i;
                    segundo_numero /= i;
                    primos *= i; 
                }
            }
        }
    }
    return primos;
}

int minimo_comun_multiplo(int primer_numero, int segundo_numero)
{
    int primos = 1;
    if (primer_numero <= 0 || segundo_numero <= 0)
    {
        primos = -1;
    }
    else
    {
        for (int i = 0; i < (segundo_numero + 1); i++)
        {
            if (es_primo(i))
            {
                while ((primer_numero % i) == 0 || (segundo_numero % i) == 0)
                {
                    if (primer_numero % i == 0 && segundo_numero % i == 0)
                    {
                    primer_numero /= i;
                    segundo_numero /= i;
                    primos *= i;
                    }
                    else if (primer_numero % i == 0)
                    {
                        primer_numero /= i;
                        primos *= i;
                    }
                    else if (segundo_numero % i == 0)
                    {
                        segundo_numero /= i;
                        primos *= i;
                    }
                }
            }
        }
    }
    return primos;
}