#include <stdio.h>

int main(void)
{
    struct zapis
    {
        int sifra_osobe;
        char ime[21];
        char prezime[21];
        float dohodak;
        float porez_razrezan;
    } osoba;

    struct zdravstveni_trosak
    {
        int sifra_osobe;
        char id[18];
        float kune;
    } trosak;

    FILE *troskovi = fopen("troskovi.txt", "r+");
    FILE *porezi = fopen("porezi.bin", "rb");

    float prosjecni_dohodak;

    while (fread(&osoba, sizeof(osoba), 1, porezi) == 1)
    {
        prosjecni_dohodak += osoba.dohodak;
    }
    prosjecni_dohodak = prosjecni_dohodak / osoba.sifra_osobe;

    fseek(porezi, 0, SEEK_SET);

    while (fread(&osoba, sizeof(osoba), 1, porezi) == 1)
    {
        if (osoba.dohodak < prosjecni_dohodak)
        {
            while (scanf("%d %s %f", &trosak.sifra_osobe, &trosak.id, &trosak.kune) == 3)
            {
                if (osoba.sifra_osobe == trosak.sifra_osobe)
                {
                    osoba.porez_razrezan -= trosak.kune;
                }
                if (osoba.porez_razrezan < 0)
                {
                    osoba.porez_razrezan = 0;
                    break;
                }
            }
        }
    }

    return 0;
}