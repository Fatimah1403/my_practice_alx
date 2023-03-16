#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char *src = "Love of my life is my husband";
	char *str = malloc(sizeof(char) * strlen(src));
	char *delim = "  ";
	char *token;
	
	token = strtok(str, delim);

	while(token)
	{
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}
	return 0;
}
