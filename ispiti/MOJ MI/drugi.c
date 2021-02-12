#include <stdio.h>
#include <math.h>

int main(void)
{
    double A, B;
    int n;
    printf("Upisati a, b, n > ");
    scanf("%f %f %d", &A, &B, &n);

    double previousA = A;
    double previousB = B;

    for (int i = 0; i < n; i++)
    {
        printf("A(%d)=%8.2f  B(%d)=%8.2f\n", i + 1, A, i + 1, B);

        A = (previousA + previousB) / 2.0;
        B = sqrt(previousA * previousB);
        previousA = A;
        previousB = B;
    }

    return 0;
}