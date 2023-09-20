#include "simple_shell.h"
/**
  *_getline - Function that reads a string input
  *@lineptr: Pointer that stores address of the buffer
  *@n: Number of bytes
  *@stream: Standard input
  *Return: Number of characters read
  */
ssize_t _getline(char **lineptr, size_t *n, FILE *stream)
{
	char *temp;
	int c;
	size_t index = 0;

	if (*lineptr == NULL || *n == 0)
	{
		*n = 128;
		*lineptr = (char *)malloc(*n * sizeof(char));

		if (*lineptr == NULL)
		{
			perror("Memory allocation error");
			free(lineptr);
			return (-1);
		}
	}
	while (1)
	{
		c = getc(stream);

		if (c == EOF || c == '\n')
		{
			(*lineptr)[index] = '\0';
			return (index);
		}
		(*lineptr)[index++] = (char)c;
		if (index >= *n)
		{
			*n *= 2;
			temp = (char *)realloc(*lineptr, *n * sizeof(char));
			if (temp == NULL)
			{
				perror("Memory reallocation error");
				free(temp);
				return (-1);
			}
			*lineptr = temp;
		}
	}
}
