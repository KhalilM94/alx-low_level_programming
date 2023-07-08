/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * times_table - Short description, positive_or_negative
 * n : the ASCII position of the char to test
 * Description: Evaluates sign of a function.
 * Return: 0
 */

void times_table(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (j == 0)
			{
				_putchar('0' + i * j);
			}
			else if (!(i * j > 9))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + i * j);
			}
			else if (i * j > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (i * j) / 10);
				_putchar('0' + (i * j) % 10);
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
