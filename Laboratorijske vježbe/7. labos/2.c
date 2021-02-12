#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void SlucajniNizVelikihIMalihSlova(int n, char *polje)
{
    for (int i = 0; i < n; i++)
    {
        *(polje + i) = rand() % ('Z' - 'A' + 1) + 'A';
    }
    for (int i = 0; i < n; i++)
    {
        *(polje + i + n) = rand() % ('z' - 'a' + 1) + 'a';
    }
    *(polje + n * 2) = '\0';
    return;
}

int main(void)
{
    char polje[10];
    srand(69);
    SlucajniNizVelikihIMalihSlova(5, &polje);
    printf("%s", polje);
    return 0;
}