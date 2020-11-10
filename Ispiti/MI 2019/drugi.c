#include <stdio.h>

int main(void)
{
    int n;

    printf("Upisati n > ");
    scanf("%d", &n);

    float tocke[n][2];

    for (int i = 0; i < n; i++)
    {
        printf("  %d. tocka >", i + 1);

        scanf("%f", &tocke[i][0]);
        scanf("%f", &tocke[i][1]);
    }

    float najblizeTocke[n][2];
    float najmanjaUdaljenost;
    int duljinaNajblizihTocaka = 0;

    float udaljenost;

    for (int i = 0; i < n; i++)
    {
        udaljenost = tocke[i][0] * tocke[i][0] + tocke[i][1] * tocke[i][1];

        if (udaljenost < najmanjaUdaljenost || i == 0)
        {
            najmanjaUdaljenost = udaljenost;
            najblizeTocke[0][0] = tocke[i][0];
            najblizeTocke[0][1] = tocke[i][1];
            duljinaNajblizihTocaka = 1;
        }
        else if (udaljenost == najmanjaUdaljenost)
        {
            najblizeTocke[duljinaNajblizihTocaka][0] = tocke[i][0];
            najblizeTocke[duljinaNajblizihTocaka][1] = tocke[i][1];
            duljinaNajblizihTocaka++;
        }
    }
    printf("Najblize ishodistu su tocke:\n");

    for (int i = 0; i < duljinaNajblizihTocaka; i++)
    {
        printf("  %.2f  %.2f\n", najblizeTocke[i][0], najblizeTocke[i][1]);
    }

    return 0;
}