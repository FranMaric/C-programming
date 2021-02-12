#include <stdio.h>

double *pokNaMax(double *p, int n)
{
    double najveci, *pNajveci;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || *(p + i + i * n) > najveci)
        {
            najveci = *(p + i + i * n);
            pNajveci = p + i + i * n;
        }
    }
    return pNajveci;
}

int main(void)
{
    double matrica[4][4] = {{-1., 2., 3., 9.},
                            {-9., 5., 3., -4.},
                            {7., 2., 2., 4.},
                            {1., 2., -3., 5.}};

    double *p = pokNaMax(matrica[0], 4);

    printf("Vrijednost najveceg clana na dijagonali: %f", *p);
    return 0;
}