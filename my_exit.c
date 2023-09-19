#include "simple_shell.h"

/**
  *my_exit - Function that handles the cmd exit.
  *@av: Argument taken
  *Return: Argument value.
  */
int my_exit(char **av)
{
	int arg = 0;

	if (av[1] != NULL)
	{
		arg = _atoi(av[1]); /* Convert the argument to an integer */
	}
	if (arg < 2)
		return (EXIT_SUCCESS);
	else
		return (arg);

}
