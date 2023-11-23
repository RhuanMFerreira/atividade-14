#include <stdio.h>

main()
{
    int var1, var2;

    if (&var1 > &var2)
    {
        printf("O endereço de var1 é maior: %p\n", (void *)&var1);
    }
    else if (&var2 > &var1)
    {
        printf("O endereço de var2 é maior: %p\n", (void *)&var2);
    }
    else
    {
        printf("Os endereços são iguais.\n");
    }
}