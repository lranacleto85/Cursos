//Problema "multiplos" (adaptado de URI 1044)
//Fazer um programa para ler dois números inteiros, e dizer se um número é múltiplo do outro. Os
//números podem ser digitados em qualquer ordem.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num1;
    int num2;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    if (num1 % num2 == 0 || num2 % num1 == 0) {
        printf("Sao multiplos");
    } else {
        printf("Nao sao multiplos");
    }

    return 0;
}