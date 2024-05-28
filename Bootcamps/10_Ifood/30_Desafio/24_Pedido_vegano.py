numPedidos = int(input())

for i in range(1, numPedidos + 1):
    prato = input()
    calorias = int(input())
    ehVegano = input()  # Agora estamos coletando a entrada para verificar se é vegano ou não.

    if ehVegano == "s":
        tipo_prato = "Vegano"
    else:
        tipo_prato = "Nao-vegano"

    print(f"Pedido {i}: {prato} ({tipo_prato}) - {calorias} calorias")