#include <stdio.h>
#include <math.h>

double niz(int n)
{
    return pow(-1, n) * (1 / 2. - 1 / (4. * n * n + 2.));
}

int main(void)
{
    for (int i = 0; i < 100; i++)
        printf("%32.29lf\n", niz(i));
    return 0;
}
