#include "simple_shell.h"

/**
  *main - Function that displays the prompt
  *Return: 0 on success.
  */
int main(void)
{
	char *buf;
	size_t g_input, n = 0;

	while (1)
	{
		if (isatty(STDIN_FILENO))
		{
			write(1, "$ ", 2);
			fflush(stdout);
		}
		buf = malloc(sizeof(char) * 1024);
		g_input = _getline(&buf, &n, stdin);

		if (g_input == (size_t)NULL)
			break;

		if (g_input == (size_t)-1)
		{
			perror("Error reading input.");
			free(buf);
			exit(EXIT_FAILURE);
		}

		if (g_input > 0 && buf[g_input - 1] == '\n')
			buf[g_input - 1] = '\0';

		if (_strstr(buf, "env") != NULL)
			execute_external_cmd(buf);
		else if	(_strstr(buf, "exit") != NULL)
			execute_external_cmd2(buf);
		else if	(_strstr(buf, "setenv") != NULL)
			execute_external_cmd(buf);
		else if (_strstr(buf, "unsetenv") != NULL)
			execute_external_cmd(buf);
		else
			execute_builtin_cmd(buf);
		free(buf);
	}
	free(buf);
	return (0);
}
