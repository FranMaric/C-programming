#include <stdio.h>

int main(void)
{
    struct mjesto_s
    {
        int sifra;
        char grad[20 + 1];
        int broj_mjerenja;
    } mjesto;

    FILE *mjesta = fopen("mMjesta.bin", "rb+");
    FILE *mjerenja = fopen("mjerenja.txt", "r");

    int sifra, dan, mjesec, godina;
    float temperatura;

    char hash;

    fseek(mjesta, 0L, SEEK_END);
    int dodaj[ftell(mjesta)];

    for (int i = 0; i < sizeof(dodaj) / sizeof(dodaj[0]); i++)
        dodaj[i] = 0;

    while (fscanf(mjerenja, "%d%c%2d%2d%4d%c%f", &sifra, &hash, &dan, &mjesec, &godina, &hash, &temperatura) == 7)
    {
        if (godina == 2014)
            dodaj[sifra - 1]++;
    }

    for (int i = 0; i < sizeof(dodaj) / sizeof(dodaj[0]); i++)
    {
        if (dodaj[i] != 0)
        {
            fseek(mjesta, (long)sizeof(mjesto) * i, SEEK_SET);
            fread(&mjesto, sizeof(mjesto), 1, mjesta);
            mjesto.broj_mjerenja += dodaj[i];
            fseek(mjesta, -1L * sizeof(mjesto), SEEK_CUR);
            fwrite(&mjesto, sizeof(mjesto), 1, mjesta);
        }
    }

    fclose(mjesta);
    fclose(mjerenja);

    return 0;
}