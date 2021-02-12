#include <stdio.h>
#include <stdlib.h>

#define BROJ_TOCAKA 100000000

int main(void)
{
    struct tocka_s
    {
        double x;
        double y;
    } tocka;

    srand(69);

    FILE *bin = fopen("tocke.bin", "wb");

    for (int i = 0; i < BROJ_TOCAKA; i++)
    {
        tocka.x = (float)rand() / RAND_MAX * 100.f;
        tocka.y = (float)rand() / RAND_MAX * 100.f;

        fwrite(&tocka, sizeof(tocka), 1, bin);
    }

    fclose(bin);
    return 0;
}