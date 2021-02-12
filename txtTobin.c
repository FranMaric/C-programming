#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    struct osoba
    {
        char ime[8], prezime[8];
        unsigned int bodovi;
    } trenutno;

    FILE *txt = fopen("bodovi.txt", "r");
    FILE *bin = fopen("bodovi.bin", "wb");

    if (txt == NULL || bin == NULL)
        exit(1);

    while (fscanf(txt, "%s %s %d", &trenutno.ime, &trenutno.prezime, &trenutno.bodovi) == 3)
    {
        fwrite(&trenutno, sizeof(trenutno), 1, bin);
    }

    fclose(txt);
    fclose(bin);

    return 0;
}