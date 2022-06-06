#include <stdio.h>
#include <string.h>

void strrev(char str[])
{
    int sz = strlen(str);
    int half_sz = sz / 2;
    for(int i = 0, j = sz-1; i < half_sz; i++, j--)
    {
        char tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
    }
}

int main(void)
{
    char a[100], b[100], ab_sum[101];
    scanf("%s %s", &a, &b);
    strrev(a);
    strrev(b);
    int i = 0, j = 0, k = 0, rem = 0;
    while(i < strlen(a) && j < strlen(b))
    {
        int sum = ((a[i]-'0' + b[j]-'0') % 10) + rem;
        ab_sum[k] = '0' + sum;
        rem = (a[i]-'0' + b[j]-'0') / 10;
        j++, i++, k++;
    }
    while(i < strlen(a))
    {
        int sum = ((a[i]-'0') % 10) + rem;
        ab_sum[k] = '0' + sum;
        rem = (a[i]-'0') / 10;
        i++, k++;
    }
    while(j < strlen(b))
    {
        int sum = ((b[j]-'0') % 10) + rem;
        ab_sum[k] = '0' + sum;
        rem = (b[j]-'0') / 10;
        j++, k++;
    }
    if(rem)
    {
        ab_sum[k] += '0' + rem;
    }
    strrev(ab_sum);
    puts(ab_sum);
}
