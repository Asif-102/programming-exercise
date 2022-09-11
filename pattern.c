#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i, j;
    for (i = 0; i < (n + 1) / 2; i++, printf("\n"))
    {
        for (j = 0; j < (n + 1) / 2 - i - 1; j++)
            printf(" ");
        for (j = 0; j < 2 * i + 1; j++)
            printf("*");
    }
    for (i = (n - 1) / 2 - 1; i >= 0; i--, printf("\n"))
    {
        for (j = 0; j <= (n) / 2 - i - 1; j++)
            printf(" ");
        for (j = 0; j < 2 * i + 1; j++)
            printf("*");
    }

    return 0;
}
