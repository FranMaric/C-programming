#include <stdio.h>

//Cool but doesn't work
void znanstveniZapis(float *pRealniBroj, float *pRealniDio, int *pPotencija)
{
    float r1 = *pRealniBroj;
    float r2 = *pRealniBroj;

    unsigned int *p1 = (unsigned int *)&r1;
    *p1 = *p1 << 1;
    *p1 = *p1 >> 24;

    unsigned int *p2 = (unsigned int *)&r2;
    *p2 = *p2 << 9;
    *p2 = *p2 >> 9;

    printf("%u %u", *p1, *p2);

    return;
}

int main(void)
{
    float realniBroj = 341.5f;
    float realniDio;
    int potencija;

    // printf("Upisite broj > ");
    // scanf("%f", realniBroj);

    znanstveniZapis(&realniBroj, &realniDio, &potencija);

    return 0;
}