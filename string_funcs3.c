#include "simple_shell.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
	int sign = 1;
	signed int num = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}

/**
  *_getc - Function that gets the standard input of char and str
  *Return: Charater read
  */
int _getc(void)
{
	char c;
	ssize_t bytes_read = read(STDIN_FILENO, &c, 1);

	if (bytes_read == 0)
		return (EOF);
	else if (bytes_read == -1)
		return (-1);
	else
		return ((int)c);
}
