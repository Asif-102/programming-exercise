#include <stdio.h>
#include <string.h>

int main(void)
{
	char text[100], pattern[50];
	gets(text);
	scanf(" %s", &pattern);

	char *cur = text;

	while(cur)
	{
		char *pos = strstr(cur, pattern);
		if(!pos) break;
		printf("Found at %d\n", pos - text);
		cur = pos+1;
	}	
}
