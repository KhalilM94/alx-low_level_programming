/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Short description, positive_or_negative
 *
 * Description: Evaluates sign of a function.
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;
	int n;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = i; k <= 9; k++)
			{
				for (n = j + 1; n <= 9; n++)
				{
					putchar ((i % 10) + '0');
					putchar ((j % 10) + '0');
					putchar (' ');
					putchar ((k % 10) + '0');
					putchar ((n % 10) + '0');
					if (i != 9 || j !=  8)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
