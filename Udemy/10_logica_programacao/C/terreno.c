#include <stdio.h>

    int main(void)
{
        double largura;
        double comprimento;
        double area;
        double valor;
        double preco;
            printf("Digite a largura do terreno em m2");
            scanf("%lf", &largura);
            printf("Digite o comprimento do terreno em m2 ");
            scanf("%lf", &comprimento);
            printf("Digite o valor do metro quadrado: R$  ");
            scanf("%lf", &valor);
                area = largura * comprimento;
                preco = area * valor;
            printf("A area do terreno: %.2lf m2\n", area);
            printf("O preco do terreno: R$  %.2lf\n", preco);
        return 0;
}