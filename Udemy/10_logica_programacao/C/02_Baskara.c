// Problema "baskara"
// Fazer um programa para ler os três coeficientes de uma equação do segundo grau. Usando a fórmula
// de Baskara, calcular e mostrar os valores das raízes x1 e x2 da equação com quatro casas decimais,
// conforme exemplo. Se a equação não possuir raízes reais, mostrar uma mensagem.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double a;
    double b;
    double c;
    double delta;
    double x1;
    double x2;
    printf("Digite o valor de a: ");
    scanf("%lf", &a);
    printf("Digite o valor de b: ");
    scanf("%lf", &b);
    printf("Digite o valor de c: ");
    scanf("%lf", &c);
    delta = pow(b, 2.0) - 4.0 * a * c;
    if (a == 0 || delta < 0.0)
    {
        printf("Esta equacao nao possui raizes reais");
    }
    else
    {
        x1 = (-b + sqrt(delta)) / (2.0 * a);
        x2 = (-b - sqrt(delta)) / (2.0 * a);
        printf("X1 = %.4lf\n", x1);
        printf("X2 = %.4lf\n", x2);
    }
    return 0;
}