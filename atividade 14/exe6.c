#include <stdio.h>

int somaDobro(int *ptrA, int *ptrB)
{
    *ptrA = 2 * (*ptrA);
    *ptrB = 2 * (*ptrB);
    return (*ptrA + *ptrB);
}

main()
{
    int valorA, valorB;

    printf("Digite o valor para A: ");
    scanf("%d", &valorA);

    printf("Digite o valor para B: ");
    scanf("%d", &valorB);

    int resultado = somaDobro(&valorA, &valorB);

    printf("\nA soma do dobro de A e B é: %d\n", resultado);
    printf("Novo valor de A: %d\n", valorA);
    printf("Novo valor de B: %d\n", valorB);
}