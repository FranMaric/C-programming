#include <stdio.h>

int main(void)
{
    int broj, prva_znamenka, treca_znamenka, peta_znamenka;

    printf("Upisite 5-znamenkasti cijeli broj > ");
    scanf("%d", &broj);

    prva_znamenka = broj % 10;
    broj = broj / 10;
    broj = broj / 10;

    treca_znamenka = broj % 10;
    broj = broj / 10;
    broj = broj / 10;

    peta_znamenka = broj % 10;

    printf("\n%d %d %d", peta_znamenka, treca_znamenka, prva_znamenka);

    return 0;
}
