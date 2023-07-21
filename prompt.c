#include "main.h"

/**
* prompt - prints $ to let user know the program is
* ready to take their input
* prints the prompt if the shell is in interactive mode
* Return: no return
*/
void prompt(void)
{
bool interactive = 0;

	if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
		interactive = 1;
	if (interactive)
		_printStr("$ ", 2);
}
