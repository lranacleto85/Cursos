//Problema "menor_de_tres"
//Fazer um programa para ler três números inteiros. Em seguida, mostrar qual o menor dentre os três
//números lidos. Em caso de empate, mostrar apenas uma vez.
// conforme exemplo. Se a equação não possuir raízes reais, mostrar uma mensagem.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int  val1, val2, val3;
    printf("digite o primeiro valor: ");
    scanf("%d", &val1);
    printf("digite o segundo valor: ");
    scanf("%d", &val2);
    printf("digite o terceiro valor: ");
    scanf("%d", &val3);
    if (val1 < val2 && val1 < val3){
        printf("MENOR = %d", val1);
    }
    else if (val2 < val1 && val2 < val3){
        printf("MENOR = %d", val2);
    }
    else if (val3 < val1 && val3 < val2){
        printf("MENOR = %d", val3);
    }
    else if (val1 == val2 && val1 < val3){
        printf("MENOR = %d", val1);
    }
    else if (val1 == val3 && val1 < val2){
        printf("MENOR = %d", val1);
    }
    else if (val2 == val3 && val2 < val1){
        printf("MENOR = %d", val2);
    }
    else{
        printf("MENOR = %d", val1);
    }
    return 0;
}
