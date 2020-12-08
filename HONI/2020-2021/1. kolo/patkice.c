#include <stdio.h>

int main(void)
{
    char directions[4] = "ENSW";

    unsigned r, s, path = 4;
    int minimalPathLength = -1;

    scanf("%d %d", &r, &s);

    char matrix[r][s];

    //Inputing the matrix
    for (int i = 0; i < r; i++)
    {
        scanf("%s", &matrix[i]);
    }

    int islandX, islandY, getOut = 0;

    //Finding island
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < s; j++)
        {
            if (matrix[i][j] == 'o')
            {
                islandX = j;
                islandY = i;
                getOut = 1;
                break;
            }
        }
        if (getOut == 1)
            break;
    }

    //Path finding algorithm
    int x, y, currentLength;
    for (int i = 0; i < 4; i++)
    {
        getOut = 0;
        currentLength = 1;
        x = islandX;
        y = islandY;
        switch (i)
        {
        case 0:
            x++;
            break;
        case 1:
            y--;
            break;
        case 2:
            y++;
            break;
        case 3:
            x--;
            break;
        }

        while (!getOut)
        {
            switch (matrix[y][x])
            {
            case '>':
                if (x < s - 1)
                    x++;
                else
                    getOut = 1;
                break;
            case '<':
                if (x > 0)
                    x--;
                else
                    getOut = 1;
                break;
            case 'v':
                if (y < r - 1)
                    y++;
                else
                    getOut = 1;
                break;
            case '^':
                if (y > 0)
                    y--;
                else
                    getOut = 1;
                break;
            case 'x':
                getOut = 1;
                currentLength--;
                break;
            case '.':
                getOut = 1;
                break;
            }
            currentLength++;
        }
        if (matrix[y][x] == 'x' && (currentLength < minimalPathLength || minimalPathLength == -1))
        {
            minimalPathLength = currentLength;
            path = i;
        }
    }
    if (path == 4)
    {
        printf(":(");
    }
    else
    {
        printf(":)\n%c", directions[path]);
    }
    return 0;
}