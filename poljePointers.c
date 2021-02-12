#include <stdio.h>
#define SIZE 10

int main(void)
{
    int polje[SIZE], najveci;

    printf("Upisite clanove > ");

    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &polje[i]);
        if (i == 0 || najveci < *(&polje[0] + i))
        {
            najveci = *(&polje[0] + i);
        }
    }
    printf("Najveci clan je %d", najveci);

    return 0;
}