#include <stdio.h>

int odrediIndNajVClana(int *f, int n)
{
    int najBroj;
    int najIndex;

    for (int i = 0; i < n; i++)
    {
        if (i == 0 || *(f + i) > najBroj)
        {
            najBroj = *(f + i);
            najIndex = i;
        }
    }
    return najIndex;
}

int odrediFrek(int *matrica, int m, int n, int *f)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *(f + *(matrica + j + i * n)) += 1;
        }
    }

    return *(f + odrediIndNajVClana(f, 10));
}

int main(void)
{
    int m = 3, n = 4;
    int frekvencije[10] = {0};
    int matrica[3][4] = {{1, 5, 5, 6},
                         {2, 2, 5, 0},
                         {2, 2, 5, 8}};

    odrediFrek(&matrica[0][0], m, n, &frekvencije[0]);
    for (int i = 0; i < 10; i++)
    {
        printf("Broj: %d Frekvencija: %d\n", i, frekvencije[i]);
    }

    return 0;
}