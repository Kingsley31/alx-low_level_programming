#include <stdio.h>

/**
 * addSeparation - puts comma and sapce
 * @i: value to determine whether se[earation should be put
 *
 * Return: returns nothing.
 */
void addSeparation(int i)
{
	if (i < 100)
		printf(" ");
}

/**
 * main - main method
 * @void: takes nothing
 *
 * Return: returns nothing.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s", "FizzBuzz");
			addSeparation(i);
			continue;
		}
		if (i % 3 == 0)
		{
			printf("%s", "Fizz");
			addSeparation(i);
			continue;
		}
		if (i % 5 == 0)
		{
			printf("%s", "Buzz");
			addSeparation(i);
			continue;
		}
		printf("%d", i);
		addSeparation(i);
	}
	putchar('\n');
	return (0);
}
