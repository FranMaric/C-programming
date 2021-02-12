#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(void)
{
    FILE *fp;

    fp = fopen("test.txt", "w");

    if (fp == NULL)
    {
        printf("Error %d \n", errno);
        exit(1);
    }
    fprintf(fp, "This is a test");

    fclose(fp);
    return 0;
}