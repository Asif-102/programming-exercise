#include <stdio.h>
#include <string.h>

int main(void)
{
    char password[10];

    scanf("%s", &password);

    int extendRange;
    scanf("%d", &extendRange);

    for(int i = 0; i < strlen(password); i++)
    {
        if(password[i] + extendRange > 'z')
        {
            password[i] = 'a' + extendRange - (1 + ('z' - password[i]));
        }
        else
        {
            password[i] += extendRange;
        }
    }

    printf("%s", password);
}