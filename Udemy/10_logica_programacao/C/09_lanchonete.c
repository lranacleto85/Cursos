//Problema "lanchonete" (adaptado de URI 1038)
//Uma lanchonete possui vários produtos. Cada produto possui um código
//e um preço. Você deve fazer um programa para ler o código e a
//quantidade comprada de um produto (suponha um código válido), e daí
//informar qual o valor a ser pago, com duas casas decimais;

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int codigo, quantidade;
    double total;
    printf("Codigo do produto comprado: ");
    scanf("%d", &codigo);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);
    if (codigo == 1)
    {
        total = quantidade * 5.00;
    }
    else if (codigo == 2)
    {
        total = quantidade * 3.50;
    }
    else if (codigo == 3)
    {
        total = quantidade * 4.80;
    }
    else if (codigo == 4)
    {
        total = quantidade * 8.90;
    }
    else if (codigo == 5)
    {
        total = quantidade * 7.32;
    }
    printf("Total: R$ %.2lf", total);
    return 0;
}