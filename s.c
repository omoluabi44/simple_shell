#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	char *User_Input = NULL;
	size_t Count_User_Input = 0;
	ssize_t Get_User_Input;

	while (1) {
		// Display a prompt
		ssize_t Write_Out = write(STDOUT_FILENO, "Shell $ ", 8);
		if (Write_Out == -1) {
			perror("Error");
			free(User_Input);
			return -1;
		}

		// Read user input using getline
		Get_User_Input = getline(&User_Input, &Count_User_Input, stdin);
		if (Get_User_Input == -1) {
			perror("Error");
			free(User_Input);
			return -1;
		}

		// Print the length of user input
		printf("Length of input: %zu\n", Get_User_Input);

		// Free allocated memory for User_Input
		free(User_Input);
		User_Input = NULL;
		Count_User_Input = 0;
	}

	return 0;
}
