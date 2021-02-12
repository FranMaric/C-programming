#include <stdio.h>
#include <string.h>

void izbaciZnakove(char *niz, char izbaci)
{
    int len = strlen(niz), delta;

    for (int i = 0; i < len; i++)
    {
        if (*(niz + i) == izbaci && *(niz + i + 1) != izbaci)
        {
            delta = i;
            break;
        }
    }

    for (int i = 0; i < delta + 1; i++)
    {
        for (int j = 0; j < len; j++)
        {
            *(niz + j) = *(niz + j + 1);
        }
    }

    return;
}

int main(void)
{
    char niz[30];
    printf("Niz: ");
    fgets(niz, 30, stdin);
    izbaciZnakove(niz, 't');
    printf("Rez: %s", niz);
}