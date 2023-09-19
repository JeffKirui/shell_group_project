#include "simple_shell.h"

/**
  *_strchr - Fucntion that locates char in a string
  *@str: String array checked
  *@ch: Character checked
  *Return: NULL
 */
char *_strchr(char str[], char ch)
{
	while (*str != '\0')
	{
		if (*str == ch)
		{
			return (str);
		}
		str++;
	}
	if (*str == ch)
	{
		return (str);
	}
	return (NULL);
}

/**
  *_strcpy - Function that copies a string
  *@dest: Destination
  *@src: Source
  *Return: Destination
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
  *_strcat - Fucntion that concatenates 2 strings
  *@dest: Destination
  *@src: Source
  *Return: Destination
  */
char *_strcat(char *dest, const char *src)
{
	size_t i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';

	return (dest);
}
