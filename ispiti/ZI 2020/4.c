#include <stdio.h>

void brojiBitove(unsigned int broj, int *brojBitova, int *brojPunihBajtova)
{
    *brojBitova = *brojPunihBajtova = 0;

    for (int i = 0; i < 4 * 8; i++)
    {
        if (broj >> i & 0x01 == 1)
        {
            ++*brojBitova;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (broj >> i * 8 & 0xFF == 1)
            ++*brojPunihBajtova;
    }
    return;
}

int main(void)
{
    int brojBitova, brojBajtova;

    brojiBitove(25, &brojBitova, &brojBajtova);

    printf("\n%d %d", brojBitova, brojBajtova);
    return 0;
}