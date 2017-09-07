#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float Suma (float a, float b)
{
    float suma;
    suma=a+b;
    return suma;
}

float Resta (float a, float b)
{
    float resta;
    resta=a-b;
    return resta;
}

float Division (float a, float b)
{
    float division;
    if(b!=0)
    {
        return a/b;
    }

    else
    {
        printf("ERROR");
    }

}

float Multiplicacion (float a, float b)
{
    float multiplicacion;
    multiplicacion=a*b;
    return multiplicacion;
}

float Factorial (float a)
{
    float respuesta;
    if(a==0)
        return 1;
    respuesta=a*Factorial(a-1);
    return (respuesta);
}

