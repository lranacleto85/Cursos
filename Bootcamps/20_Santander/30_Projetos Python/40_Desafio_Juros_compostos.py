def calcular_valor_final_investimento(valor_inicial, taxa_juros, periodo):
    valor_final = valor_inicial * (1 + taxa_juros)**periodo
    return valor_final

valor_inicial = float(input("Digite o valor inicial do investimento: "))
taxa_juros = float(input("Digite a taxa de juros anual: "))
periodo = int(input("Digite o período de tempo em anos: "))

valor_final = calcular_valor_final_investimento(valor_inicial, taxa_juros, periodo)
print(f"Valor final do investimento: R$ {valor_final:.2f} ")