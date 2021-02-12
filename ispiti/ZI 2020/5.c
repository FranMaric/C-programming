#include <stdio.h>

int main(void)
{
    // int i = 0, poc = 1, x = 1, t = 8, k = 3;

    // // //NJIHOVO
    // // for (i = poc; i <= t; i = i + k)
    // // {
    // //     x = x + i * t;
    // // }

    // //MOJE
    // i = poc;
    // do
    // {
    //     x = x + i * t;
    //     i += k;
    // } while (i <= t);

    // printf("%d %d %d %d %d", i, poc, x, t, k);

    int a = 1, b = 2, c = 3, d = 4;
    int polje[5] = {5, 6, 7}, *p = polje;
    a = scanf("%d%d %d", &b, &c, &d);
    printf("%d %d %d %d\n", a, b, c, d);
    printf("%d %d %d", *p, *(p + 3), *p + 3);
}