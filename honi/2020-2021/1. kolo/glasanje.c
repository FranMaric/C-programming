#include <stdio.h>

int main(void)
{
    int n, m;

    scanf("%d", &n);
    scanf("%d", &m);

    int kandidati[n];
    int obitelji[m][2];

    for (int i = 0; i < m; i++)

        scanf("%d %d", &obitelji[i][0], &obitelji[i][1]);

    for (int i = 0; i < n; i++)

        kandidati[i] = 0;

    for (int i = 0; i < m; i++)

        kandidati[obitelji[i][0] - 1] = kandidati[obitelji[i][0] - 1] + obitelji[i][1];

    int indeksPobjednika = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || kandidati[i] > kandidati[indeksPobjednika])
        {
            indeksPobjednika = i;
        }
    }

    printf("%d", indeksPobjednika + 1);
    return 0;
}