#include <stdio.h>

void zamijeni(double *a, double *b)
{
    double temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void poredaj(double *n1, double *n2, double *n3)
{
    if (*n3 < *n1)
        zamijeni(n1, n2);
    if (*n3 < *n2)
        zamijeni(n2, n3);
    if (*n2 < *n1)
        zamijeni(n1, n2);

    return;
}

int main(void)
{
    double n1, n2, n3;
    printf("Upisite tri realna broja > ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    poredaj(&n1, &n2, &n3);
    printf("%8.6f %8.6f %8.6f", n1, n2, n3);
    return 0;
}