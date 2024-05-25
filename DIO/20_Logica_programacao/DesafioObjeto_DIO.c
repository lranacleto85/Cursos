#include <stdio.h>
#include <string.h>

// Definição da estrutura Heroi
typedef struct {
    char nome[50];
    int idade;
    char tipo[20];
} Heroi;

// Função para atacar
void atacar(Heroi *heroi) {
    char ataque[50];
    
    if (strcmp(heroi->tipo, "mago") == 0)
        strcpy(ataque, "usou magia");
    else if (strcmp(heroi->tipo, "guerreiro") == 0)
        strcpy(ataque, "usou espada");
    else if (strcmp(heroi->tipo, "monge") == 0)
        strcpy(ataque, "usou artes marciais");
    else if (strcmp(heroi->tipo, "ninja") == 0)
        strcpy(ataque, "usou shuriken");
    else
        strcpy(ataque, "usou um ataque");
    
    printf("O %s de nome %s, idade %d, atacou usando %s\n", heroi->tipo, heroi->nome, heroi->idade, ataque);
}

int main() {
    Heroi heroi;
    
    // Entrada de dados
    printf("Digite o nome do heroi: ");
    scanf("%s", heroi.nome);
    
    printf("Digite a idade do heroi: ");
    scanf("%d", &heroi.idade);
    
    printf("Escolha o tipo de heroi (mago, guerreiro, monge, ninja): ");
    scanf("%s", heroi.tipo);
    
    // Chama a função para atacar
    atacar(&heroi);

    return 0;
}