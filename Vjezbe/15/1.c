#include <stdio.h>
#include <math.h>

void korijeni(unsigned int n, double *korijen2, double *korijen3, double *korijen5)
{
    *korijen2 = pow(n, 1 / 2.);
    *korijen3 = pow(n, 1 / 3.);
    *korijen5 = pow(n, 1 / 5.);
    return;
}

int main(void)
{
    unsigned int n;
    double korijen2, korijen3, korijen5;

    printf("Upisite nenegativni cijeli broj > ");
    scanf("%d", &n);
    korijeni(n, &korijen2, &korijen3, &korijen5);
    printf("Rezultati su:\n%lf\n%lf\n%lf", korijen2, korijen3, korijen5);
    return 0;
}