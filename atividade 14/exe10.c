#include <stdio.h>

main()
{
    int array[5];

    printf("Digite 5 valores inteiros:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", array + i);
    }

    printf("\nO dobro de cada valor lido é:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(array + i) * 2);
    }
}