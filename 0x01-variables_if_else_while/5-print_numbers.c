#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - output all the numbers from 0 to 9
 * followed by a new line
 * Return: 0 if (successful)
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);

	printf("\n");
	return (0);
}
