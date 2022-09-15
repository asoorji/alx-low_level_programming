#include <stdio.h>

/**
 * main - Print out all the numbers between one to 100
 * Constraints - Print fizz for multiples of 3, Buzz for multiples of 5
 * and fizz buzz for multiples of 5 and 3
 * Return: void
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}
		if (i != 100)
		{
			putchar(' ');
		}
		i++;
	}
	putchar('\n');

	return (0);
}
