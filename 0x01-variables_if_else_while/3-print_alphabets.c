#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - output all the characters of the english language
 * in lower case first then prints them out in upper case
 * followed by a new line
 * Return: 0 if (successful)
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
