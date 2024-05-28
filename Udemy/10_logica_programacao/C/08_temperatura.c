//Problema "temperatura"
//Deseja-se converter uma medida de temperatura da escala Celsius para Fahrenheit ou vice-versa. Para
//isso, você deve construir um programa que leia a letra "C" ou "F" indicando em qual escala vai ser
//informada uma temperatura. Em seguida o programa deve mostrar a temperatura na outra escala com
//duas casas decimais. A seguir é dada a fórmula para converter de Fahrenheit para Celsius (você deve
//deduzir a fórmula de Celsius para Fahrenheit) C= 5/9x(F-32)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double temperatura;
    char escala;
    double resultado;
    printf("Informe a escala (C ou F): ");
    scanf(" %c", &escala);
    printf("Informe a temperatura: ");
    scanf("%lf", &temperatura);
    if (escala == 'C')
    {
        resultado = (9.0 / 5.0) * temperatura + 32.0;
        printf("Temperatura equivalente em Fahrenheit: %.2lf", resultado);
    }
    else
    {
        resultado = (5.0 / 9.0) * (temperatura - 32.0);
        printf("Temperatura equivalente em Celsius: %.2lf", resultado);
    }
    return 0;
}