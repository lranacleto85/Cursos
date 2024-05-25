#include <math.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int operacao;
    double num1, num2, resultado;
    
    printf("Escolha a operacao a ser realizada:\n");
    printf("1. Adicao\n");
    printf("2. Subtracao\n");
    printf("3. Multiplicacao\n");
    printf("4. Divisao\n");
    printf("5. Logaritmo\n");
    printf("6. Operacoes Binarias\n");
    
    scanf("%d", &operacao);

    switch(operacao) {
        case 1:
            printf("Digite os numeros para adicao: ");
            scanf("%lf %lf", &num1, &num2);
            resultado = num1 + num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case 2:
            printf("Digite os numeros para subtracao: ");
            scanf("%lf %lf", &num1, &num2);
            resultado = num1 - num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case 3:
            printf("Digite os numeros para multiplicacao: ");
            scanf("%lf %lf", &num1, &num2);
            resultado = num1 * num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case 4:
            printf("Digite os numeros para divisao: ");
            scanf("%lf %lf", &num1, &num2);
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2lf\n", resultado);
            } else {
                printf("Nao e possivel dividir por zero.\n");
            }
            break;
        case 5:
            printf("Digite o numero para calcular o logaritmo: ");
            scanf("%lf", &num1);
            if (num1 > 0) {
                resultado = log(num1);
                printf("Resultado: %.2lf\n", resultado);
            } else {
                printf("Nao e possivel calcular o logaritmo de zero ou numero negativo.\n");
            }
            break;
        case 6:
            printf("Digite dois numeros inteiros para operacoes binarias: ");
            int num_int1, num_int2;
            scanf("%d %d", &num_int1, &num_int2);
            printf("Soma binaria: %d\n", num_int1 + num_int2);
            printf("Subtracao binaria: %d\n", num_int1 - num_int2);
            printf("Multiplicacao binaria: %d\n", num_int1 * num_int2);
            printf("Divisao binaria: %d\n", num_int1 / num_int2);
            printf("AND binario: %d\n", num_int1 & num_int2);
            printf("OR binario: %d\n", num_int1 | num_int2);
            printf("XOR binario: %d\n", num_int1 ^ num_int2);
            break;
        default:
            printf("Operacao invalida. Por favor, escolha uma operacao valida.\n");
    }

    return 0;
}
