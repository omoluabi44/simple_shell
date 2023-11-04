#include "main.h"
int fork_function()
{
	pid_t pid;
	printf("before forck was called\n");

	pid = fork();
	if (pid == -1)
	{
		perror("the new fork is uncreated\n");
		return (1);
	}

	printf("unfailed to create process\n");

	return (0);
}
