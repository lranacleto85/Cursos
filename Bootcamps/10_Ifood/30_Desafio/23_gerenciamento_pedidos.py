def main():
    n = int(input())
    total = 0

    for i in range(1, n + 1):
        pedido = input().split(" ")
        nome = pedido[0]
        valor = float(pedido[1])
        total += valor

    # Lê o cupom de desconto escolhido
    cupom = input()

    # Aplica o desconto de acordo com o cupom
    if cupom == "10%":
        total_com_desconto = total * 0.9
    elif cupom == "20%":
        total_com_desconto = total * 0.8
    else:
        total_com_desconto = total

    # Formata o valor com duas casas decimais
    total_formatado = "{:.2f}".format(total_com_desconto)

    print(f"Valor total: {total_formatado}")


if __name__ == "__main__":
    main()
