#include "main.h"

/**
 * *string_toupper - convert lower case string to upper
 * @str: pointer referencing the string array
 * Return: the resulting string's pointer
 */
char *string_toupper(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		if (str[count] <= 'z' && str[count] >= 'a')
			str[count] -= 32;
	}

	return (str);
}
