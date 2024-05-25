#include <stdio.h>

char board[3][3];  // Tabuleiro do jogo

// Função para inicializar o tabuleiro
void inicializarTabuleiro() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

// Função para exibir o tabuleiro
void exibirTabuleiro() {
    printf("  0 1 2\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i);
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  -----\n");
    }
}

// Função para verificar se há um vencedor
char verificarVencedor() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return board[i][0];  // Verifica linha
    }

    for (int j = 0; j < 3; j++) {
        if (board[0][j] != ' ' && board[0][j] == board[1][j] && board[1][j] == board[2][j])
            return board[0][j];  // Verifica coluna
    }

    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return board[0][0];  // Verifica diagonal principal

    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return board[0][2];  // Verifica diagonal secundária

    return ' ';  // Não há vencedor
}

int main() {
    int linha, coluna;
    char jogador = 'X';
    inicializarTabuleiro();

    while (1) {
        exibirTabuleiro();

        // Recebe a jogada do jogador
        printf("Jogador %c, informe a linha (0-2) e a coluna (0-2) separadas por um espaço: ", jogador);
        scanf("%d %d", &linha, &coluna);

        // Verifica se a jogada é válida
        if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || board[linha][coluna] != ' ') {
            printf("Jogada inválida. Tente novamente.\n");
            continue;
        }

        // Atualiza o tabuleiro com a jogada do jogador
        board[linha][coluna] = jogador;

        // Verifica se há um vencedor
        char vencedor = verificarVencedor();
        if (vencedor != ' ') {
            exibirTabuleiro();
            printf("Jogador %c venceu!\n", vencedor);
            break;
        }

        // Alterna para o próximo jogador
        jogador = (jogador == 'X') ? 'O' : 'X';
    }

    return 0;
}
