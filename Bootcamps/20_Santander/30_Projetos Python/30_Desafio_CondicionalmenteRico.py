# Entrada de dados
saldo_total = int(input("Informe o saldo total da conta: "))
valor_saque = int(input("Informe o valor do saque: "))

# TODO: Criar as condições necessárias para impressão da saída, vide tabela de exemplos.
# Verificar se o saldo é suficiente para o saque
if saldo_total >= valor_saque:
    saldo_total -= valor_saque  # Subtrair o valor do saque do saldo total
    print(f"Saque realizado com sucesso! Novo saldo: {saldo_total}")
else:
    print("Saldo insuficiente. Saque nao realizado!")
