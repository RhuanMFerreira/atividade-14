#include <stdio.h>

main()
{
    int matriz[3][3];

    printf("Endereços de cada posição da matriz:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Posição [%d][%d]: %p\n", i, j, (void *)&matriz[i][j]);
        }
    }
}