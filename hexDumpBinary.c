#include <stdio.h>

#define BUFFER_SIZE 10

int main(void)
{
    FILE *bin = fopen("C:\\Users\\Fran\\Desktop\\C\\Random\\bodovi.bin", "rb");

    unsigned char buffer[BUFFER_SIZE];

    while (fread(&buffer, sizeof(buffer), 1, bin))
    {
        for (int i = 0; i < BUFFER_SIZE; i++)
            printf("%x ", buffer[i]);
    }
}