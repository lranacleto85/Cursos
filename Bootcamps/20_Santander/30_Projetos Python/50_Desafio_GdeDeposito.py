saldo = 0

while True:
    try:
        valor_deposito = float(input("Digite o valor do depósito (ou 0 para encerrar): "))

        if valor_deposito == 0:
            print("Encerrando o programa...")
            break
        elif valor_deposito < 0:
            print("Valor inválido! Digite um valor maior que zero.")
        else:
            saldo += valor_deposito
            print(f"Depósito realizado com sucesso!\nSaldo atual: R$ {saldo:.2f}")
    except ValueError:
        print("Entrada inválida! Por favor, digite um valor válido.")
