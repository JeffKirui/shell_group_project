#include "simple_shell.h"

/**
  *_unsetenv - Function that unsets env variables
  *@name: Variable name to unset
  *Return: NULL
  */
int _unsetenv(const char *name)
{
	char **env = environ;
	int found = 0;

	if (name == NULL)
	{
		const char *error_msg = "unsetenv: Missing variable name\n";

		write(STDERR_FILENO, error_msg, my_strlen(error_msg));
		return (-1);
	}

	while (*env != NULL)
	{
		char *envVar = *env;

		if (_strncmp(envVar, name, my_strlen(name)) == 0
				&& envVar[my_strlen(name)] == '=')
		{
			while (*env != NULL)
			{
				*env = *(env + 1);
				env++;
			}
			found = 1;
		}
		else
			env++;
	}

	if (!found)
	{
		const char *error_msg = "unsetenv: Variable not found\n";

		write(STDERR_FILENO, error_msg, my_strlen(error_msg));
		return (-1);
	}

	return (0);
}
