#include <stdio.h>

int GCD(int num1, int num2);

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    int gcd = GCD(a, b);

    printf("GCD is : %d\n", gcd);
    
}

int GCD(int num1, int num2)
{
    if(num1 < num2)
    {
        num1 += num2;
        num2 = num1 - num2;
        num1 = num1 - num2;
    }

    while (num1 != num2)
    {
        if(num2 == 0)
        {
            break;
        }

        if(num1 > num2)
        {
            num1 -= num2;
        }
        else
        {
            num2 -= num1;
        }
    }

    return num1;
    
}