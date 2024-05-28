//Problema "operadora"
//Uma operadora de telefonia cobra R$ 50.00 por um plano básico que dá direito a 100 minutos de
//telefone. Cada minuto que exceder a franquia de 100 minutos custa R$ 2.00. Fazer um programa para
//ler a quantidade de minutos que uma pessoa consumiu, daí mostrar o valor a ser pago.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int minutos;
    double valor;
    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);
    if (minutos <= 100){
        valor = 50.00;
    }
    else{
        valor = 50.00 + (minutos - 100) * 2.00;
    }
    printf("valor a pagar = %.2lf", valor);
    return 0;
}