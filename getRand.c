#include <stdio.h>

#define A 9001
#define C 2531011
#define M 32717

static int clan = 100;

void setSeed(int select)
{
    clan = select;
}

int getRand()
{
    clan = (A * clan + C) % M;
    return clan;
}

int main(void)
{

    setSeed(100);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", getRand());
    }
    return 0;
}