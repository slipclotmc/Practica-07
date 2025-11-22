/* FI UNAM fundamentos de programación
    Práctica 07 - programa 6*/
    
#include <stdio.h>
int main()
{
    double a, b, res;
    printf("Calcular el error matemático E = |a - b|\n\n");
    printf("Ingrese el valor de a:\n");
    scanf("%lf",&a);
    printf("Ingrese el valor de b:\n");
    scanf("%lf",&b);
    res = a < b ? b-a : a-b;
    printf("El error matemático de\n");
    printf("| %lf - %lf | es %lf\n", a, b, res);
    return 0;
}
