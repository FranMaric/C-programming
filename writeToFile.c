#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *tokUlaz = NULL;
    tokUlaz = fopen("ulaz.txt", "r");
    if (tokUlaz == NULL)
    {
        printf("Nije uspjelo otvaranje ulaz.txt");
        exit(10);
    }

    FILE *tokIzlaz = fopen("izlaz.txt", "w");
    int c;
    while ((c = getc(tokUlaz)) != EOF)
    {
        putchar(c);
        putc(c, tokIzlaz);
    }
    fclose(tokUlaz);
    fclose(tokIzlaz);

    return 0;
}