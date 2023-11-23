#include <stdio.h>

main()
{
    int var1, var2;

    printf("Digite o valor da primeira variável inteira: ");
    scanf("%d", &var1);

    printf("Digite o valor da segunda variável inteira: ");
    scanf("%d", &var2);

    if (&var1 > &var2)
    {
        printf("Conteúdo do maior endereço (%p): %d\n", (void *)&var1, var1);
    }
    else if (&var2 > &var1)
    {
        printf("Conteúdo do maior endereço (%p): %d\n", (void *)&var2, var2);
    }
    else
    {
        printf("Os endereços são iguais.\n");
    }
}