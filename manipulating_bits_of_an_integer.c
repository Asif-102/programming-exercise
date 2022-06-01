#include <stdio.h>
#include <stdbool.h>

struct Binary
{
    char str[50];
};


struct Binary toBinary(unsigned int val, int k)
{
    struct Binary ans;
    for(int i = 0; i < k; i++)
    {
        ans.str[i] = '0';
    }
    ans.str[k] = '\0';

    int idx = k -1;
    while(val > 0)
    {
        int d = val % 2;
        val = val / 2;
        ans.str[idx] = '0' + d;
        idx--;
    }
    return ans;
}

bool getBit(unsigned int mask, int k)
{
    return (mask & (1<<k)) != 0;
}

unsigned int setBit(unsigned int mask, int k)
{
    return (mask | (1<<k));
}

unsigned int clearBit(unsigned int mask, int k)
{
    return (mask & ~(1<<k));
}

unsigned int flipBit(unsigned int mask, int k)
{
    return mask ^ (1<<k);
}

int main(void)
{
    int x = 54;
    printf("%d = %s\n", x, toBinary(x, 8).str);

    for(int i = 0; i < 8; i++)
    {
        printf("%d th bit: %d\n", i, getBit(x, i));
        printf("Clear: %s\n", toBinary(clearBit(x, i), 8).str);
        printf("Set: %s\n", toBinary(setBit(x, i), 8).str);
        printf("Flip: %s\n", toBinary(flipBit(x, i), 8).str);
    }
}

/*
00110110

00000001
00000010
00000100
00001000
*/
