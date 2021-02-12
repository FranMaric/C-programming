#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    char niz[n];
    scanf("%s", &niz);
    int w = n, h = 0;
    int maxPeak, minPeak;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (niz[i] == '+')
            {
                h++;
            }
            else if (niz[i] == '-')
            {
                h--;
            }
        }
        else
        {
            if (niz[i] == '+' && niz[i - 1] != '-')
            {
                h++;
            }
            else if (niz[i] == '-' && niz[i - 1] != '+')
            {
                h--;
            }

            if (h > maxPeak || i == 0)
            {
                maxPeak = h;
            }
            if (h < minPeak || i == 0)
            {
                minPeak = h;
            }
        }
    }
    h = maxPeak - minPeak + 1;

    char matrica[h][w];
    printf("%d %d\n", h, w);
    int currentValue = maxPeak + 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < h; j++)
        {
            matrica[j][i] = '.';
        }

        if (i != 0)
        {
            if (niz[i] == '+' && niz[i - 1] != '-')
            {
                currentValue++;
            }
            else if (niz[i] == '-' && niz[i - 1] != '+')
            {
                currentValue--;
            }
        }

        if (niz[i] == '+')
        {
            matrica[currentValue][i] = 47;
        }
        else if (niz[i] == '-')
        {
            matrica[currentValue][i] = 92;
        }
        else
        {
            matrica[currentValue][i] = 95;
        }
    }

    for (int i = 0; i < h; i++)
    {
        printf("%s\n", matrica[i]);
    }

    return 0;
}
