#include <stdio.h>
#include <string.h>
void toBinary(unsigned int val, char str[], int k)
{
    for(int i = 0; i < k; i++)
    {
        str[i] = '0';
    }
    str[k] = '\0';

    int idx = k -1;
    while(val > 0)
    {
        int d = val % 2;
        val = val / 2;
        str[idx] = '0' + d;
        idx--;
    }
}

int main(void)
{
    unsigned int x = 10;
    unsigned int y = 35;

    char sx[100], sy[100], sand[100], sor[100], sxor[100], snot[100];
    toBinary(x, sx, 8);
    toBinary(y, sy, 8);

    printf("sx  = %s\n", sx);
    printf("sy  = %s\n", sy);

    unsigned int and = x & y;
    toBinary(and, sand, 8);
    printf("and = %d\n", and);
    printf("and = %s\n", sand);

    unsigned int or = x | y;
    toBinary(or, sor, 8);
    printf("or  = %d\n", or);
    printf("or  = %s\n", sor);

    unsigned int xor = x ^ y;
    toBinary(xor, sxor, 8);
    printf("xor = %d\n", xor);
    printf("xor = %s\n", sxor);

    unsigned int not =  ~y;
    toBinary(not, snot, 8);
    printf("not = %d\n", not);
    printf("not = %s\n", snot);
}
