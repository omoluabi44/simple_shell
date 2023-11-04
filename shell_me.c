#include "main.h"
int main ()
{

	size_t Write_Out;
	ssize_t Get_User_Input;
	char *User_Input = NULL;
	size_t Count_User_Input = 0;
	char *token;
	while(1)
	{
		Write_Out = write(STDOUT_FILENO, "Shell $", 7);
		if (Write_Out == -1)
		{
			/* free(User_Input); */
			return(-1);
		}

		Get_User_Input = getline(&User_Input, &Count_User_Input, stdin);
		if (Get_User_Input == -1 )
		{
			free(User_Input);
			return (-1);
		}
		
	

		// free(User_Input);
	}

	return (0);
}