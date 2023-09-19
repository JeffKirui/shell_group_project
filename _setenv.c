#include "simple_shell.h"


int _setenv(const char *name, const char *value, int overwrite)
{
	if (name == NULL || value == NULL)
		return (-1);

	char **env = environ;

	while (*env != NULL)
	{
		char *envVar = *env;

		if (_strncmp(envVar, name, my_strlen(name)) == 0 &&
				envVar[my_strlen(name)] == '=')
		{
			if (!overwrite)
				return (0);

			char *newEnvVar = (char *)malloc(my_strlen(name) + my_strlen(value) + 2);

			if (newEnvVar == NULL)
			{
				perror("Error updating environment variable");
				return -1;
			}
			*env = newEnvVar;
			return (0);
		}
		env++;
	}

	int index = 0;
	while (environ[index] != NULL)
		index++;
	char *newEnvVar = (char *)malloc(my_strlen(name) + my_strlen(value) + 2);
	if (newEnvVar == NULL)
	{
		perror("Error adding environment variable");
		return (-1);
	}
	char **newEnviron = (char **)malloc((index + 2) * sizeof(char *));
	if (newEnviron == NULL)
	{
		free(newEnvVar);
		perror("Error adding environment variable");
		return (-1);
	}
	newEnviron[index] = newEnvVar;
	newEnviron[index + 1] = NULL;

	environ = newEnviron;

	return 0;
}
