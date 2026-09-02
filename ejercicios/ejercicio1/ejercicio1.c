/*
 * Entrega 4 - Ejercicio 1
 * Programación 1 - Ingeniería en Computación - UNRN Andina
 * -----------------
 * Ezequiel Nehuen
 * Enehuen
 */

int es_primo(int numero)
{
    int resultado = 0;
    if (numero >= 0)
    {
        int dividendo = 1;
        int contador = 0; //Genero un contador para luego determinar si un numero es divisible por mas de dos numeros lo tacho como que no es primo.
        while (dividendo <= numero)
        {
            if (numero % dividendo == 0)
            {
                contador++;
            }
            dividendo++;
        }
        if (contador == 2)
        {
            resultado = 1;
        }
    }
    return resultado;    
}

int proximo_primo(int numero_base)
{
    int resultado;
    int bandera = 0;
    int num_temp = numero_base + 1;
    while (bandera != 1)
    {
        if (es_primo(num_temp))
        {
            resultado = num_temp;
            bandera = 1;
        }
        num_temp++;
    }
    return resultado;
}

int cantidad_divisores(int numero)
{
    int contador;
    int resultado;
    if (numero >= 0)
    {
        int dividendo = 1;
        contador = 0; //Genero un contador para luego determinar si un numero es divisible por mas de dos numeros lo tacho como que no es primo.
        while (dividendo <= numero)
        {
            if (numero % dividendo == 0)
            {
                contador++;
            }
            dividendo++;
        }
    }
    resultado = contador;
    return resultado;
}