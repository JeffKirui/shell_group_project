#include "simple_shell.h"

/**
  *execute_builtin_cmd - Function that take builtin commands.
  *@cmd: Command input
  */
void execute_builtin_cmd(char *cmd)
{
	pid_t pid = fork();
	int result;

	if (pid == -1)
	{
		perror("Error: Failure to fork");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		char *argv[] = {"/bin/sh", "-c", cmd, NULL};

		result = execve(argv[0], argv, NULL);
		if (result == -1)
		{
			perror("Error: ");
		}
		exit(EXIT_FAILURE);
	}
	else
	{
		int status;

		waitpid(pid, &status, 0);

	}
}
