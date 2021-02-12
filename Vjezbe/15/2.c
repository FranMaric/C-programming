#include <stdio.h>

int maks(int *n1, int *n2)
{
    if (*n1 > *n2)
    {
        return *n1;
    }
    else
    {
        return *n2;
    }
}

int main(void)
{
    int n1, n2;
    printf("Upisite dva cijela broja > ");
    scanf("%d %d", &n1, &n2);
    printf("Rezultat je %d", maks(&n1, &n2));
    return 0;
}