#include <stdio.h>
#include <stdlib.h>

char genSlovo()
{
    static unsigned int brojacPoziva = 1;
    if (brojacPoziva++ % 2 == 0)
    {
        return rand() % ('z' - 'a' + 1) + 'a';
    }

    return rand() % ('Z' - 'A' + 1) + 'A';
}

int main(void)
{
    srand(70);
    char string[10];
    for (int i = 0; i < 10; i++)
    {
        string[i] = genSlovo();
    }
    printf("%s", string);
    return 0;
}