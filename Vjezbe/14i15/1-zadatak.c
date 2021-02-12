#include <stdio.h>
#define MAX_NIZ 30

int main(void)
{
    int tezina = 0;
    char lozinka[MAX_NIZ + 1];

    printf("Lozinka: ");
    fgets(lozinka, MAX_NIZ + 1, stdin);

    int vs = 0, ms = 0, z = 0, sz = 0, zs = 0, p = 0, n = 0;

    for (int i = 0;; i++)
    {
        if (*(lozinka + i) == '\n' || *(lozinka + i) == '\0')
        {
            n = i;
            break;
        }
        if (*(lozinka + i) >= 'a' && *(lozinka + i) <= 'z')
            ms++;
        else if (*(lozinka + i) >= 'A' && *(lozinka + i) <= 'Z')
            vs++;

        else if (*(lozinka + i) >= '0' && *(lozinka + i) <= '9')
        {
            z++;
            if (i != 0 && *(lozinka + i + 1) != '\n' && *(lozinka + i + 1) != '\0')
            {
                zs++;
            }
        }

        else if (*(lozinka + i) >= '!' && *(lozinka + i) <= '/' || *(lozinka + i) >= ':' && *(lozinka + i) <= '@')
        {
            sz++;
            if (i != 0 && *(lozinka + i + 1) != '\n' && *(lozinka + i + 1) != '\0')
            {
                zs++;
            }
        }
    }

    p = (vs == 0 ? 0 : 1) + (ms == 0 ? 0 : 1) + (z == 0 ? 0 : 1) + (sz == 0 ? 0 : 1) + (zs == 0 ? 0 : 1);

    tezina = n * 4 + (n - vs) * 2 + (n - ms) * 2 + z * 4 + sz * 6 + zs * 2 + p * 2;

    printf("Tezina: %d", tezina);

    return 0;
}