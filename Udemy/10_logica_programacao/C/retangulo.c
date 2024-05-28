#include <math.h>
#include <stdio.h>

int main()
{
    double base;
    double altura;
    double area;
    double perimetro;
    double diagonal;
     
        printf("Digite o valor da base do retangulo: ");
        scanf("%lf", &base);
        printf("Digite o valor da altura do retangulo: ");
        scanf("%lf", &altura);
        area = (base * altura);
        perimetro = (base + altura) * 2;
        diagonal = sqrt(pow(base,2) + pow(altura,2));
        printf("AREA = %.4lf\n", area);
        printf("PERIMETRO = %.4lf\n", perimetro);
        printf("DIAGONAL = %.4lf\n", diagonal);
    return 0;
}