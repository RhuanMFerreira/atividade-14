#include <stdio.h>

main()
{
    float array[10];

    printf("Endereços de cada posição do array:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Posição %d: %p\n", i, (void *)&array[i]);
    }
}