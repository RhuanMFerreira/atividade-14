#include <stdio.h>

void encontrarMaiorMenor(int *ptrA, int *ptrB)
{
    if (*ptrA < *ptrB)
    {
        int temp = *ptrA;
        *ptrA = *ptrB;
        *ptrB = temp;
    }
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

    encontrarMaiorMenor(&valorA, &valorB);

    printf("\nValores depois da função:\n");
    printf("A (maior valor) = %d\n", valorA);
    printf("B (menor valor) = %d\n", valorB);
}