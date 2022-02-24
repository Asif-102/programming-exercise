#include <stdio.h>

int main(void)
{
    int numArr[10];

    for(int i = 0; i < 10; i++)
    {
        int num;
        scanf("%d", &num);
        numArr[i] = num;
    }

    int maximumRepeatNumber = numArr[0];
    int repeatTime = 1;

    for(int i = 0; i < 10; i++)
    {   
        int count = 1;

        for(int j = i + 1; j < 10; j++)
        {
            if(numArr[i] == numArr[j])
            {
                count++;
            }
        }
        if(count > repeatTime)
        {
            repeatTime = count;
            maximumRepeatNumber = numArr[i];
        }
    }

    printf("Maximum Repeat Number : %d\n", maximumRepeatNumber);
}