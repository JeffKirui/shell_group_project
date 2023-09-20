#include "simple_shell.h"

/**
  *execute_builtin_cmd - Function that take builtin commands.
  *@cmd: Command input
  */
void execute_builtin_cmd(char *cmd)
{
	pid_t pid = fork();
	int result;
	int status;

	if (pid == -1)
	{
		perror("Error: Failure to fork");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		char *argv[4];

		argv[0] = "/bin/sh";
		argv[1] = "-c";
		argv[2] = cmd;
		argv[3] = NULL;

		result = execve(argv[0], argv, NULL);
		if (result == -1)
		{
			perror("Error: ");
		}
		exit(EXIT_FAILURE);
	}
	else
		waitpid(pid, &status, 0);
}
