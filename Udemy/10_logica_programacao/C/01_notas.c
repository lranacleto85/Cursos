#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de
// uma disciplina anual. Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no
// ano juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a
// mensagem "REPROVADO"
int main()
{
    int nota1;
    int nota2;
    double media;

    printf("Digite a nota no primeiro semestre: ");
    scanf("%d", &nota1); // Corrigir o erro aqui, você precisa passar um endereço de memória para scanf.
    printf("Digite a nota no segundo semestre: ");
    scanf("%d", &nota2); // Corrigir o erro aqui, você precisa passar um endereço de memória para scanf.

    media = (double)(nota1 + nota2) / 2.0;

    if (media >= 6.00)
    {
        printf("Aprovado com media %.1f", media);
    }
    else
    {
        printf("Reprovado com media %.1f", media);
    }

    return 0;
}
