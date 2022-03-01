#include <stdio.h>

int main(void)
{
    int n, vowel, consonent, letter, number, punctuation, others;

    vowel = consonent = letter = number = punctuation = others = 0;

    scanf("%d", &n);

    char ch[n];

    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &ch[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            letter++;
            if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u')
            {
                vowel++;
            }
            else
            {
                consonent++;
            }
        }

        else if ((int)ch[i] >= 48 && (int)ch[i] <= 57)
        {
            number++;
        }

        else if ((int)ch[i] >= 58 && (int)ch[i] <= 63)
        {
            punctuation++;
        }

        else
        {
            others++;
        }
    }

    printf("v=%d c=%d l=%d n=%d p=%d o=%d\n", vowel, consonent, letter, number, punctuation, others);
}