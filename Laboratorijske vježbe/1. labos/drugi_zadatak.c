#include <stdio.h>

int main(void)
{
    int ulaz;
    printf("Upisite cetveroznamenkasti cijeli broj > ");
    scanf("%d", &ulaz);
    if ((1000 <= ulaz && ulaz < 10000) || (-10000 < ulaz && ulaz <= -1000))
    {
        if (ulaz < 0)
        {
            ulaz = -ulaz;
        }
        int druga_znamenka, zadnja_znamenka;
        druga_znamenka = ulaz / 100 % 10;
        zadnja_znamenka = ulaz % 10;
        printf("Druga i zadnja znamenka > %d %d", druga_znamenka, zadnja_znamenka);
    }
    else
    {
        printf("Nije unesen cetveroznamenkasti cijeli broj.");
    }
    return 0;
}