#include "simple_shell.h"

/**
  *_strstr - Function that checks substring
  *@str: String checked
  *@substring: Substring checked
  *Return: NULL
  */
char *_strstr(const char *str, const char *substring)
{
	const char *a;
	const char *b;

	b = substring;

	if (*b == 0)
		return ((char *)str);

	for (; *str != 0; str += 1)
	{
		if (*str != *b)
			continue;

		a = str;
		while (1)
		{
			if (*b == 0)
				return ((char *)str);
			if (*a++ != *b++)
				break;
		}
		b = substring;
	}
	return (NULL);
}

/**
 * my_strlen - Checks length of str.
 * @s: String checked
 *
 * Return: Length of the str
 */
int my_strlen(const char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * _strcmp - Compares 2 strngs
 * @s1: First strng
 * @s2: Second strng
 *
 * Return: Negative if s1 < s2
 * 0 if s1 == s2, else positive
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
