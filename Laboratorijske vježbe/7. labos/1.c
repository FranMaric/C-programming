#include <stdio.h>

struct spremnik_s
{
    float prosjek;
    int *niz;
    int N;
};

extern struct spremnik_s rjesenje;

void ObradaNiza(int *niz, int N)
{
    float prosjek = 0;
    for (int i = 0; i < N; i++)
        prosjek += *(niz + i);
    prosjek = prosjek / N;

    if (prosjek == 0 || rjesenje.prosjek == 0)
        return;

    if ((prosjek > 0 && rjesenje.prosjek < 0 || prosjek < 0 && rjesenje.prosjek > 0))
    {
        rjesenje.prosjek = prosjek;
        rjesenje.niz = niz;
        rjesenje.N = N;
    }

    return;
}
