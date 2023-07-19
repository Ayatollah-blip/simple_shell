#include "main.h"

/*

*/

int main(int argc, char *argv[])
{
char *prompt = "$ ";
char *line = NULL, **Tok;
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
		if (line[_strlen(line) - 1] == '\n')
			line[_strlen(line) - 1] = '\0';
		Tok = token(line);
		if (Tok == NULL || *Tok == NULL || **Tok == '\0')
			continue;
		if (ApplyExecute(Tok, line))
			continue;
		free(line);
		Free(Tok);
	}
	
	return(0);
}
