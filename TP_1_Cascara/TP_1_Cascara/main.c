#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

    char seguir='s';
    int opcion=0;
    float a;
    float b;
    float resultadoSuma;
    float resultadoResta;
    float resultadoDivision;
    float resultadoMultiplicacion;
    float resultadoFactorial;

int main()
{
    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%.2f)\n" ,a);
        printf("2- Ingresar 2do operando (B=%.2f)\n" ,b);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("\tIngrese un numero, por favor: ");
                scanf("\t%f",&a);
                system("pause");
                system("cls");
                break;
            case 2:
                printf("\tIngrese otro numero, por favor: ");
                scanf("\t%f", &b);
                system("pause");
                system("cls");
                break;
            case 3:
                resultadoSuma=Suma(a,b);
                printf("El resultado de la suma de ambos numeros es: %.2f\n ", resultadoSuma);
                system("pause");
                system("cls");
                break;
            case 4:
                resultadoResta=Resta(a,b);
                printf("El resultado de la resta de ambos numeros es: %.2f\n", resultadoResta);
                system("pause");
                system("cls");
                break;
            case 5:
                resultadoDivision=Division(a,b);
                printf("El resultado es: %.2f\n", resultadoDivision);
                system("pause");
                system("cls");
                break;
            case 6:
                resultadoMultiplicacion=Multiplicacion(a,b);
                printf("El resultado es: %.2f\n", resultadoMultiplicacion);
                system("pause");
                system("cls");
                break;
            case 7:
                resultadoFactorial=Factorial(a);
                printf("El resultado del factorial es: %.2f\n", resultadoFactorial);
                system("pause");
                system("cls");
                break;
            case 8:
                resultadoSuma=Suma(a,b);
                printf("El resultado de la suma es: %.2f\n", resultadoSuma);
                resultadoResta=Resta(a,b);
                printf("El resultado de la resta es: %.2f\n", resultadoResta);
                resultadoDivision=Division(a,b);
                printf("El resultado de la division es: %.2f\n", resultadoDivision);
                resultadoMultiplicacion=Multiplicacion(a,b);
                printf("El resultado de la multiplicacion es: %.2f\n", resultadoMultiplicacion);
                resultadoFactorial=Factorial(a);
                printf("El resultado del factorial del numero A, es: %.2f\n\n", resultadoFactorial);
                system("pause");
                system("cls");
                break;
           case 9:
                printf("Desea continuar?:  ");
                fflush(stdin);
                scanf("%c", &seguir);
                system("pause");
                system("cls");
                break;
        }

    }
 return 0;

}
