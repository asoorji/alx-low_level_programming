#include "main.h"

/**
 * len - function that returns the length of string
 * @str: input string
 * Return: the length
 */
int len(char *str)
{
	int length = 0;

	if (str != NULL)
	{
		while (str[length])
			length++;
	}

	return (length);
}

/**
 * argstostr - function that concatenates all args
 * @ac: length of args
 * @av: array of args
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	char *output = NULL;
	int y = 0, i = ac, k, total = 0, x = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (ac--)
		total += (len(av[ac]) + 1);
	output = (char *) malloc(total + 1);

	if (output != NULL)
	{
		while (y < i)
		{
			for (k = 0; av[y][k] != '\0'; k++)
				output[k + x] = av[y][k];
			output[x + k] = '\n';
			x += (k + 1);
			y++;
		}
		output[x] = '\0';
	}
	else
	{
		return (NULL);
	}

	return (output);
}
