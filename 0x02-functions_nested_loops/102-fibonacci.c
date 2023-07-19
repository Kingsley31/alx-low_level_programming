#include <stdio.h>

/**
 * main - prints fabonacci series starting from 1 and 2 to 50
 *
 * Return: 0 success
 */
int main(void)
{
	int printed[51];
	int counter = 1;

	while (counter <= 50)
	{
		if (counter == 1 || counter == 2)
		{
			printed[counter - 1] = counter;
			printf("%d", counter);
		}
		else if (counter > 2)
		{
			printed[counter - 1] = printed[counter - 2] + printed[counter - 3];
			printf("%d", printed[counter - 2] + printed[counter - 3]);
		}
		if (counter < 50)
		{
			printf(", ");
		}
		else
			printf("\n");
		counter++;
	}
	return (0);
}
