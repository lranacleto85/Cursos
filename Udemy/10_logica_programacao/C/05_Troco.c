//Problema "troco_verificado"
//Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
//O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
//e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido
//ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o
//valor restante conforme exemplo.

#include <stdio.h>

int main(){
    double preco, dinheiro, troco, faltam;
    int qtd;

	printf("Preco unitario do produto: ");
    scanf("%lf", &preco);

    printf("Quantidade comprada: ");
    scanf("%d", &qtd);

    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);

    if (preco * qtd > dinheiro) {
        faltam = preco * qtd - dinheiro;
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf\n", faltam);
    }
    else {
        troco = dinheiro - preco * qtd;
        printf("TROCO = %.2lf\n", troco);
    }

	return 0;
}