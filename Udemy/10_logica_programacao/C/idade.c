#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    char nome1[50], nome2[50];
    int idade1, idade2;
    double media;

    // Lendo o nome e idade da primeira pessoa
    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    gets(nome1);
    printf("Idade: ");
    scanf("%d", &idade1);


    // Lendo o nome e idade da segunda pessoa
    printf("Dados da segunda pessoa:\n");
    printf("Nome: ");
    fseek(stdin, 0, SEEK_END);
    gets(nome2);
    printf("Idade: ");
    scanf("%d", &idade2);

    // Calculando a média de idade
    media = (double) (idade1 + idade2) / 2.0;

    // Exibindo a média de idade
    printf("A idade média de %s e %s é de %.1f anos\n", nome1, nome2, media);

    return 0;
}