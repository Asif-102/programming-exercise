#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
    char str[100];
    fgets(str, 100, stdin);
    str[strlen(str)-1]='\0';
    
    bool word = false;
    int ans = 0;

    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] != ' ')
        {
            word = true;
        }
        if(str[i] == ' ')
        {
            if(word)
            {
                ans++;
                word = false;
            }
        }
    }
    if(word)
    {
        ans++;
    }
    printf("%d", ans);
}
