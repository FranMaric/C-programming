#include <stdio.h>

int main(void)
{
    int i = 0, poc = 5, m = 3, k = 69, x = 0, y = 3, z = 23, t = 2, n = 1;

    //Njihovo
    for (i = poc; i <= m; i = i + n)
    {
        if (i > k)
        {
            x = x * 1.1f;
            break;
        }
        if (i < t)
        {
            y = x + y * 0.9f;
        }
        z = y + z / 1.2f;
    }

    printf("%d %d %d %d %d %d %d %d %d \n", i, poc, m, k, x, y, z, t, n);

    i = 0, poc = 5, m = 3, k = 69, x = 0, y = 3, z = 23, t = 2, n = 1;

    //BEZ for, continue, break i goto
    i = poc;
    while (i <= m && i > k)
    {
        if (i < t)
        {
            y = x + y * 0.9f;
        }
        z = y + z / 1.2f;

        i = i + n;
    }
    if (i > k)
    {
        x = x * 1.1f;
    }

    printf("%d %d %d %d %d %d %d %d %d ", i, poc, m, k, x, y, z, t, n);

    return 0;
}