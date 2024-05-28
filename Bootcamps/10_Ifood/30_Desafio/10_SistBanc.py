from datetime import datetime

class Cliente:
    def __init__(self, nome, sobrenome, cpf):
        self.nome = nome
        self.sobrenome = sobrenome
        self.cpf = cpf

class Conta:
    def __init__(self, numero_conta, cliente):
        self.numero_conta = numero_conta
        self.saldo = 0
        self.cliente = cliente
        self.extrato = []

    def realizar_deposito(self, valor):
        self.saldo += valor
        self.extrato.append(f"{datetime.now()}: Depósito de R${valor}")

    def realizar_saque(self, valor):
        if self.saldo >= valor:
            self.saldo -= valor
            self.extrato.append(f"{datetime.now()}: Saque de R${valor}")
        else:
            print("\n@@@ Saldo insuficiente, operação de saque cancelada. @@@")

    def exibir_extrato(self):
        print("\n@@@ Extrato da conta @@@")
        for item in self.extrato:
            print(item)

def criar_cliente(nome, sobrenome, cpf):
    return Cliente(nome, sobrenome, cpf)

def criar_conta(numero_conta, cliente):
    return Conta(numero_conta, cliente)

def listar_contas(contas):
    print("\n@@@ Lista de contas @@@")
    for conta in contas:
        print(f"Conta {conta.numero_conta} - Saldo: R${conta.saldo}")

def menu():
    print("\n@@@ Escolha uma opção @@@")
    print("d: Depositar")
    print("s: Sacar")
    print("e: Extrato")
    print("nu: Novo cliente")
    print("nc: Nova conta")
    print("lc: Listar contas")
    print("q: Sair")
    return input("@@@ Opção: ")

def main():
    clientes = []
    contas = []

    while True:
        opcao = menu()

        if opcao == "q":
            print("\n@@@ Saindo do sistema bancário. Até logo! @@@")
            break
        elif opcao == "nu":
            nome = input("\nDigite o nome do cliente: ")
            sobrenome = input("Digite o sobrenome do cliente: ")
            cpf = input("Digite o CPF do cliente: ")
            cliente = criar_cliente(nome, sobrenome, cpf)
            contas.append(criar_conta(input("\nDigite o número da conta: "), cliente))
        elif opcao == "nc":
            cpf = input("\nDigite o CPF do cliente: ")
            cliente = next((c for c in contas if c.cliente.cpf == cpf), None)
            if cliente:
                contas.append(criar_conta(input("\nDigite o número da conta: "), cliente))
            else:
                print("\n@@@ Cliente não encontrado. Crie um novo cliente. @@@")
        elif opcao == "lc":
            listar_contas(contas)
        else:
            if not contas:
                print("\n@@@ Nenhuma conta selecionada. Selecione uma conta ou crie uma nova. @@@")
            else:
                numero_conta = input("\nDigite o número da conta: ")
                conta = next((c for c in contas if c.numero_conta == numero_conta), None)
                if conta:
                    if opcao == "d":
                        valor = float(input("\nDigite o valor a ser depositado: "))
                        conta.realizar_deposito(valor)
                    elif opcao == "s":
                        valor = float(input("\nDigite o valor a ser sacado: "))
                        conta.realizar_saque(valor)
                    elif opcao == "e":
                        conta.exibir_extrato()
                else:
                    print("\n@@@ Conta não encontrada. Selecione uma conta válida. @@@")
        print()
