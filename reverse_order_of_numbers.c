#include <stdio.h>

int main(void)
{
    int input, result = 0, increment = 1;

    while (scanf("%d", &input) && input != 0)
    {
        result = input * increment + result;
        increment *= 10;
    }
    
    (result > 0) && printf("%d\n", result);
}