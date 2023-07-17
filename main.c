#include "main.h"

/*

*/

int main(int argc, char *argv[])
{
char *prompt = "$ ";
char *line = NULL;
size_t len = 0;
ssize_t read;
	
	
	if (argc < 0)
		return (-1);	
	while(1)
	{
		_printStr(prompt, _strlen(prompt));
		read = getline(&line, &len, stdin);
		if (read < 0)
			break;
		if (line[len - 1] == '\n')
			line[linesize - 1] = '\0';

		free(read);
	}
	
}
