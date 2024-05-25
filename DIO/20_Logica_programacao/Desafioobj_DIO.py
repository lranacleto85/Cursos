class Heroi:
    def __init__(self, nome, idade, tipo):
        self.nome = nome
        self.idade = idade
        self.tipo = tipo

    def atacar(self):
        if self.tipo == "mago":
            ataque = "usou magia"
        elif self.tipo == "guerreiro":
            ataque = "usou espada"
        elif self.tipo == "monge":
            ataque = "usou artes marciais"
        elif self.tipo == "ninja":
            ataque = "usou shuriken"
        else:
            ataque = "usou um ataque"

        print(f"O {self.tipo} de nome {self.nome}, idade {self.idade}, atacou usando {ataque}")


def main():
    nome = input("Digite o nome do heroi: ")
    idade = int(input("Digite a idade do heroi: "))
    tipo = input("Escolha o tipo de heroi (mago, guerreiro, monge, ninja): ")

    heroi = Heroi(nome, idade, tipo)
    heroi.atacar()


if __name__ == "__main__":
    main()
