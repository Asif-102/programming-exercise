#include <stdio.h>

const int ROW = 7;
const int COL = 7;

int main(void)
{
    char grid[ROW][COL];

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            grid[i][j] = '-';
        }
    }

    int a, b;

    while (scanf("%d %d", &a, &b) && (a != 0 || b != 0))
    {
        grid[a-1][b-1] = '*';
        
        for (int i = 0; i < ROW; i++)
        {
            for (int j = 0; j < COL; j++)
            {
                printf("%c", grid[i][j]);
            }
            printf("\n");
        }
    }
}