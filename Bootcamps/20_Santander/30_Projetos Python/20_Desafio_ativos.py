# Lista para armazenar os ativos
ativos = []

# Entrada da quantidade de ativos
quantidadeAtivos = int(input("Informe a quantidade de ativos: "))

# Entrada dos códigos dos ativos
for _ in range(quantidadeAtivos):
    codigoAtivo = input("Informe o tipo do ativo: ")
    ativos.append(codigoAtivo)

# Ordenar os ativos em ordem alfabética
ativos_ordenados = sorted(ativos)

# Imprimir a lista de ativos ordenada
for ativo in ativos_ordenados:
    print(ativo)
