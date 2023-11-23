#include <stdio.h>

void calcularSoma(int *ptrA, int valorB)
{
    *ptrA = *ptrA + valorB;
}

main()
{
    int valorA, valorB;

    printf("Digite o valor para A: ");
    scanf("%d", &valorA);

    printf("Digite o valor para B: ");
    scanf("%d", &valorB);

    printf("\nValores antes da função:\n");
    printf("A = %d\n", valorA);
    printf("B = %d\n", valorB);

    calcularSoma(&valorA, valorB);

    printf("\nValores depois da função:\n");
    printf("A (com resultado da soma) = %d\n", valorA);
    printf("B = %d\n", valorB);
}