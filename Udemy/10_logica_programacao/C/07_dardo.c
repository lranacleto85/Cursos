// Problema "dardo"
// No arremesso de dardo, o atleta tem três chances para lançar o dardo à maior distância que conseguir.
// Você deve criar um programa para, dadas as medidas das três tentativas de lançamento, informar qual
// foi a maior.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double distancia1;
    double distancia2;
    double distancia3;
    printf("Digite a primeira tentativa: ");
    scanf("%lf", &distancia1);
    printf("Digite a segunda tentativa: ");
    scanf("%lf", &distancia2);
    printf("Digite a terceira tentativa: ");
    scanf("%lf", &distancia3);

    if (distancia1 > distancia2 && distancia1 > distancia3)
    {
        printf("MAIOR DISTANCIA = %.2lf\n", distancia1);
    }
    else if (distancia2 > distancia1 && distancia2 > distancia3)
    {
        printf("MAIOR DISTANCIA = %.2lf\n", distancia2);
    }
    else
    {
        printf("MAIOR DISTANCIA = %.2lf\n", distancia3);
    }

    return 0;
}