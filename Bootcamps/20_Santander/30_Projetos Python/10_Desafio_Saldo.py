# Receber as entradas do usuário
saldo_atual = float(input("Informe o saldo atual: "))
valor_deposito = float(input("Informe o valor do depósito: "))
valor_retirada = float(input("Informe o valor da retirada: "))

# Calcular o saldo atualizado
saldo_atualizado = saldo_atual + valor_deposito - valor_retirada

# Imprimir o saldo atualizado com uma casa decimal
print(f"Saldo atualizado na conta: {saldo_atualizado:.1f}")