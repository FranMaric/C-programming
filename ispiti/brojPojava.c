#include <stdio.h>
#include <string.h>
#include <ctype.h>

int brojPojava(char *niz, int *pojava, int *najveci)
{
    int len = strlen(niz);

    for (int i = 0; i < len; i++)
    {
        if (isalpha(*(niz + i)))
        {
            ++*(pojava + tolower(*(niz + i)) - 97);
        }
    }
    int max;

    for (int i = 0; i < 26; i++)
    {
        if (*(pojava + i) > max || i == 0)
        {
            max = *(pojava + i);

            for (int j = 0; j < 26; j++)
            {
                *(najveci + j) = 0;
            }

            *(najveci + i) = *(pojava + i);
        }
        else if (*(pojava + i) == max)
        {
            *(najveci + i) = *(pojava + i);
        }
    }
    if (max == 0)
        return 0;
    else
        return max;
}

int main(void)
{
    char niz[101];
    int pojava[26] = {0};
    int najveci[26] = {0};

    fgets(niz, 101, stdin);

    int broj_pojava = brojPojava(&niz[0], &pojava[0], &najveci[0]);

    if (broj_pojava == 0)
    {
        printf("U unesenom nizu nema znakova.");
    }
    else
    {
        for (int i = 0; i < 26; i++)
        {
            if (najveci[i] != 0)
                printf("%c %d\n", 65 + i, najveci[i]);
        }
    }

    return 0;
}