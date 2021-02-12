#include <stdio.h>
#include <math.h>

#define STEPS 1000.

double squareFunction(double x)
{
    return x * x;
}

double linearFunction(double x)
{
    return x;
}

double constantFunction(double x)
{
    return 1;
}

double duljinaLuka(double a, double b, double (*f)(double))
{
    double duljinaLuka = 0, x1, x2, y1, y2;

    double diff = (b - a) / STEPS;

    for (int n = 0; n < STEPS; n++)
    {
        x1 = a + diff * n;
        x2 = x1 + diff;
        y1 = f(x1);
        y2 = f(x2);
        duljinaLuka += pow(pow(x1 - x2, 2) + pow(y1 - y2, 2), 0.5);
    }

    return duljinaLuka;
}

int main(void)
{
    printf("%lf", duljinaLuka(0.0, 2.0, squareFunction));
    return 0;
}