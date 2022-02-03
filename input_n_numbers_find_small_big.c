#include <stdio.h>

int main(void)
{
    int n, numbers, maximum, minimum;
    
    scanf("%d", &n);
    scanf("%d", &numbers);

    maximum = minimum = numbers;

    for(int i = 1; i < n; i++)
    {
        scanf("%d", &numbers);
        
        if(numbers > maximum) maximum = numbers;
        if(numbers < minimum) minimum = numbers;
    }

    printf("MAXIMUM: %d\n", maximum);
    printf("MINIMUM: %d\n", minimum);
}