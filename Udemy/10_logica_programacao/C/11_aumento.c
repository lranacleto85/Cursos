// Problema "aumento" (adaptado de URI 1048)
// Uma empresa vai conceder um aumento percentual de salário aos seus funcionários dependendo de quanto
// cada pessoa ganha, conforme tabela ao lado. Fazer um programa para ler o salário de uma pessoa, daí mostrar
// qual o novo salário desta pessoa depois do aumento, quanto foi o aumento e qual foi a porcentagem de aumento.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double salarioatual;
    double novosalario;
    double aumento;
    printf("Insira o salario do funcionario: R$ ");
    scanf("%lf", &salarioatual);
    if (salarioatual <= 1000.00)
    {
        novosalario = salarioatual * 1.2;
        aumento = novosalario - salarioatual;
        printf("Novo salario: R$ %.2f\n", novosalario);
        printf("Aumento: R$ %.2f\n", aumento);
        printf("Porcentagem: 20%%");
    }
    else if (salarioatual > 1000.00 && salarioatual <= 3000.00)
    {
        novosalario = salarioatual * 1.15;
        aumento = novosalario - salarioatual;
        printf("Novo salario: R$ %.2f\n", novosalario);
        printf("Aumento: R$ %.2f\n", aumento);
        printf("Porcentagem: 15%%");
    }
    else if (salarioatual > 3000.00 && salarioatual <= 8000.00)
    {
        novosalario = salarioatual * 1.1;
        aumento = novosalario - salarioatual;
        printf("Novo salario: R$ %.2f\n", novosalario);
        printf("Aumento: R$ %.2f\n", aumento);
        printf("Porcentagem: 10%%");
    }
    else
    {
        novosalario = salarioatual * 1.05;
        aumento = novosalario - salarioatual;
        printf("Novo salario: R$ %.2f\n", novosalario);
        printf("Aumento: R$ %.2f\n", aumento);
        printf("Porcentagem: 5%%");
    }

    return 0;
}