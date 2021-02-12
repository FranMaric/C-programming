#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void gen(double *broj, bool *jestVeci)
{
    static bool prviPoziv = true;
    static double prethodni;

    if (prviPoziv)
    {
        srand((unsigned int)time(NULL));
    }
    *broj = (double)rand() / RAND_MAX * 9.0 + 1.0;
    if (prviPoziv)
    {
        prviPoziv = false;
        jestVeci = false;
    }
    else
    {
        *jestVeci = *broj > prethodni;
    }
    prethodni = *broj;
    return;
}

int main(void)
{
    double broj;
    bool jestVeci;
    for (int i = 1; i <= 7; ++i)
    {
        gen(&broj, &jestVeci);
        printf("%7.4lf, %s\n", broj, jestVeci ? "true" : "false");
    }
    return 0;
}
