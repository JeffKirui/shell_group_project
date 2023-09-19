#include "simple_shell.h"

/**
 *execute_external_cmd2 - Function that handles more cmds.
 *@cmd: Commands checked.
 */
void execute_external_cmd2(char *cmd)
{
	if (_strcmp(cmd, "exit") == 0)
	{
		char *args[MAX_ARGS];
		int arg_count = 0;
		int exit_status = 0;

		char *token = strtok(cmd, " \t\n");

		while (token != NULL && arg_count < MAX_ARGS - 1)
		{
			args[arg_count++] = token;
			token = strtok(NULL, " \t\n");
		}

		args[arg_count] = NULL;

		if (arg_count > 1)
			exit_status = my_exit(args);

		exit(exit_status);
	}
}
