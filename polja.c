#include <stdio.h>

int main(void)
{
    float polje[4][4] = {
        {10, 11, 12, 13},
        {14, 15, 69, 17},
        {14, 15, 16, 17},
        {14, 15, 16, 17},
    };

    printf("%f", polje[1][2]);
}