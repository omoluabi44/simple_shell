#include "main.h"

int tokenize(char *user_input)
{
	char *str;
	char *del = " ";
	char *token;
	char *token2;

	str = malloc(sizeof(char) * strlen(user_input) + 1);
	if (str == NULL)
		return (-1);

	strcpy(str, user_input);
	token = strtok(str, del);
	if ( token != NULL)
	{
		token2 = strtok(NULL, " ");
		if (token2 != NULL)
		{
			printf("command not found\n");
		}
		else
		{
			printf("command execute successfully\n");
		}
	}
	free(str);
	return (0);
}
