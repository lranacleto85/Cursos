#include <iostream>

int main() {
    int hora_inicial, hora_final, duracao;

    std::cout << "Hora inicial: ";
    std::cin >> hora_inicial;

    std::cout << "Hora final: ";
    std::cin >> hora_final;

    // Calcula a duração do jogo
    if (hora_inicial < hora_final) {
        duracao = hora_final - hora_inicial;
    } else {
        duracao = 24 - hora_inicial + hora_final;
    }

    std::cout << "O JOGO DUROU " << duracao << " HORA(S)" << std::endl;

    return 0;
}