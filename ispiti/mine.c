#include <stdio.h>
#include <stdlib.h>

void postaviMine(int *polje, int n, int m)
{
    int x, y;
    for (int i = 0; i < m; i++)
    {
        x = rand() % n;
        y = rand() % n;
        while (*(polje + x + y * n) == 1)
        {
            x = rand() % n;
            y = rand() % n;
        }
        *(polje + x + y * n) = 1;
    }
}

int staniNaPolje(int *polje, int n, int x, int y)
{
    if (*(polje + x + y * n) == 1)
    {
        return -1;
    }
    int broj_mina = 0;

    if (x + 1 < n && *(polje + x + 1 + y * n) == 1)
        broj_mina++;
    if (x - 1 >= 0 && *(polje + x - 1 + y * n) == 1)
        broj_mina++;
    if (y + 1 < n && *(polje + x + y * n + n) == 1)
        broj_mina++;
    if (y - 1 >= 0 && *(polje + x + 1 + y * n - n) == 1)
        broj_mina++;

    return broj_mina;
}

int main(void)
{
    int red_matrice = 0, broj_mina = 0, x = -1, y = -1;
    while (red_matrice < 5 || red_matrice > 10 || broj_mina < 5 || broj_mina >= red_matrice * red_matrice)
    {
        printf("Red matrice > ");
        scanf("%d", &red_matrice);
        printf("Broj mina > ");
        scanf("%d", &broj_mina);
        if (red_matrice < 5 || red_matrice > 10 || broj_mina < 5 || broj_mina >= red_matrice * red_matrice)
            printf("Neispravan unos!\n");
    }

    int matrica[red_matrice][red_matrice];

    for (int i = 0; i < red_matrice; i++)
        for (int j = 0; j < red_matrice; j++)
            matrica[i][j] = 0;

    postaviMine(&matrica[0][0], red_matrice, broj_mina);

    printf("\nIgra pocinje\n\n");

    while (69)
    {
        printf("Unesite koordinate: ");
        scanf("%d %d", &x, &y);

        if (x >= 0 && x < red_matrice && y >= 0 && y < red_matrice)
        {
            broj_mina = staniNaPolje(&matrica[0][0], red_matrice, x, y);
            if (broj_mina == -1)
                break;
            else
                printf("Oko vas se nalazi %d mina.\n", broj_mina);
        }
    }

    printf("Stali ste na minu!!!\nGame Over");

    return 0;
}