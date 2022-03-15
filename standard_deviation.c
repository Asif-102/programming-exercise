#include <stdio.h>
#include <math.h>

int main(void)
{
    double numbers[10], sum = 0, mean = 0, sqr_diff_sum = 0, sigma = 0;

    for(int i = 0; i < 10; i++)
    {
        scanf("%lf", &numbers[i]);

        sum += numbers[i];
    }

    mean = sum / 10;
    printf("Mean: %g\n", mean);

    for(int i = 0; i < 10; i++)
    {
        double differenct = mean - numbers[i];
        sqr_diff_sum += (differenct * differenct);
    }

    sigma = sqrt(sqr_diff_sum / 10);
    printf("Standard Deviation: %g\n", sigma);

}