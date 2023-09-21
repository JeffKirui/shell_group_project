#include "simple_shell.h"

/**
  *execute_external_cmd - Function that takes external commands
  *@cmd: Command input
  */
void execute_external_cmd(char *cmd)
{
	if (_strcmp(cmd, "env") == 0)
	{
		char **env = environ;

		while (*env != NULL)
		{
			write(STDOUT_FILENO, *env, my_strlen(*env));
			write(STDOUT_FILENO, "\n", 1);
			++env;
		}
	}
	if (_strncmp(cmd, "setenv", 6) == 0)
	{
		char *var_name = strtok(cmd + 6, "=");
		char *var_value = strtok(NULL, "=");

		if (setenv(var_name, var_value, 1) == -1)
			perror("Error setting environment variable");
		else
			setenv(var_name, var_value, 1);
	}
	if (_strncmp(cmd, "unsetenv", 8) == 0)
	{
		char *var_name = strtok(cmd + 8, " \t\n");

		if (_unsetenv(var_name) == -1)
			perror("Error unsetting environment variable");
		else
			_unsetenv(var_name);
	}
}
