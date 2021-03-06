#include "shell.h"
/**
 * shellexit - This will run the builtin exit
 * @line: Line buffer of user input
 * @args: Arguments from user
 * Return: Void
 */
void shellexit(char **args, char *line)
{

	if (line)
		free(line);
	if (args)
		free(args);
	exit(0);
}
