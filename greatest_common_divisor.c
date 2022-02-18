#include <stdio.h>

int main(void)
{
    int a, b, tmp;
    scanf("%d %d", &a, &b);

    if(a < b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }

    while (a != b)
    {
        if(b == 0)
        {
            break;
        }

        if(a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }

    printf("GCD is : %d\n", a);
    
}