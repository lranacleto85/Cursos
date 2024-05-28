//Problema "tempo_de_jogo" (adaptado de URI 1046)
//Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo
//pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int hora_inicial, hora_final, duracao;

    printf("Hora inicial: ");
    scanf("%d", &hora_inicial);

    printf("Hora final: ");
    scanf("%d", &hora_final);

    // Calcula a duração do jogo
    if (hora_inicial < hora_final) {
        duracao = hora_final - hora_inicial;
    } else {
        duracao = 24 - hora_inicial + hora_final;
    }

    printf("O JOGO DUROU %d HORA(S)\n", duracao);

    return 0;
}
