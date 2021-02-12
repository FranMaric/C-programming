#include <stdio.h>

int main(void)
{
    struct pred_s
    {
        int sifra;
        char naziv[31];
        int ects;
    } predmet;
    char nazivBin[31];

    FILE *txt = fopen("pred.txt", "r");
    FILE *bin = fopen("pred.bin", "rb");

    while (fscanf(txt, "%d  %[^\n]", &predmet.sifra, &predmet.naziv) == 2)
    {
        fseek(bin, (long)sizeof(predmet) * predmet.sifra, SEEK_SET);
        fread(&nazivBin, sizeof(predmet), 1, bin);
        if (nazivBin != predmet.naziv)
        {
            printf("%4d %s\n", predmet.sifra, predmet.naziv);
        }
    }

    fclose(txt);
    fclose(bin);

    return 0;
}