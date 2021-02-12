#include <stdio.h>
#define n 4

double *pokNaMax(double *polje)
{
    double *pNajveci;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || *(polje + i + n * i) > *pNajveci)
        {
            pNajveci = polje + i + n * i;
        }
    }
    return pNajveci;
}

int main(void)
{
    double matrica[n][n] = {{-1., 2., 3., 9.},
                            {-9., 5., 3., -4},
                            {7., 2., 2., 4.},
                            {1., 2., -3., 5.}};

    printf("Najveci clan na dijagonali > %lf", *pokNaMax(&matrica[0][0]));
    return 0;
}