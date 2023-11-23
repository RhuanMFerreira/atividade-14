#include <stdio.h>

main()
{
    int inteiro = 10;
    float real = 3.14;
    char caractere = 'A';

    int *ptrInteiro;
    float *ptrReal;
    char *ptrCaractere;

    ptrInteiro = &inteiro;
    ptrReal = &real;
    ptrCaractere = &caractere;

    printf("Valores originais:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n\n", caractere);

    *ptrInteiro = 20;
    *ptrReal = 5.67;
    *ptrCaractere = 'B';

    printf("Valores após modificação:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);
}