#include <stdio.h>

double zbroj2D(double *p, int x, int y)
{
    double suma = 0;
    for (int i = 0; i < x * y; i++)
    {
        suma += *(p + i);
    }
    return suma;
}

int main(void)
{
    int x, y;
    printf("Upisite dimenzije > ");
    scanf("%d %d", &y, &x);

    double matrica[y][x];

    printf("Upisite clanove >\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
            scanf("%lf", &matrica[j][i]);
    }
    printf("Suma je: %lf", zbroj2D(&matrica[0][0], x, y));
    return 0;
}