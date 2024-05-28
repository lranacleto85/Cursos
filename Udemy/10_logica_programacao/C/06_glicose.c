//Problema "glicose"
//Fazer um programa para ler a quantidade de glicose
//no sangue de uma pessoa e depois mostrar na tela a
//classificação desta glicose de acordo com a tabela de
//referência ao lado.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int glicose;
    printf("digite a quantidade de glicose: ");
    scanf("%d", &glicose);
    if (glicose <= 100){
        printf("CLASSIFICACAO: Normal");
    }
    else if (glicose > 100 && glicose <= 140){
        printf("CLASSIFICACAO: Elevado");
    }
    else{
        printf("CLASSIFICACAO: Diabetes");
    }
    return 0;
}