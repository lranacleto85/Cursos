#include <stdio.h>

int maiorDistancia(int n, int posicoesDosRobos[]) {
    int indiceMaiorDistancia = 0;
    int maiorDistancia = posicoesDosRobos[indiceMaiorDistancia];

    for (int i = 1; i < n; i++) {
        if (posicoesDosRobos[i] > maiorDistancia) {
            maiorDistancia = posicoesDosRobos[i];
            indiceMaiorDistancia = i;
        }
    }

    return indiceMaiorDistancia;
}

int main() {
    int n;
    scanf("%d", &n);
    int posicoesDosRobos[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &posicoesDosRobos[i]);
    }

    int indiceMaiorDistancia = maiorDistancia(n, posicoesDosRobos);

    // Adicionamos 1 ao índice para apresentar o resultado de acordo com a convenção humana de começar a contar a partir de 1.
    printf("O robô que percorreu a maior distância é o robô %d\n", indiceMaiorDistancia + 1);
    return 0;
}
