#include <stdio.h>

int main(void)
{
    int lipe, kune;
    printf("Upisite stanje racuna u lipama > ");
    scanf("%d", &lipe);

    kune = lipe / 100;

    printf("Kuna: %d Lipa: %d", kune, lipe - kune * 100);
    return 0;
}