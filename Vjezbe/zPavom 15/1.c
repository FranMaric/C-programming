#include <stdio.h>
#include <math.h>

void korijeni(unsigned int n, double *k2, double *k3, double *k5)
{
    *k2 = pow(n, 1 / 2.);
    *k3 = pow(n, 1 / 3.);
    *k5 = pow(n, 1 / 5.);
    return;
}
int main(void)
{
    double k2, k3, k5;
    unsigned int n;

    printf("Upisite nenegativni cijeli broj > ");
    scanf("%d", &n);

    korijeni(n, &k2, &k3, &k5);

    printf("Rezultati su:\n%lf\n%lf\n%lf", k2, k3, k5);

    return 0;
}