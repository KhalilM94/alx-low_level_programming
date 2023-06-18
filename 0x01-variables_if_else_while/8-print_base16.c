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

	for (i = 0; i <= 15; i++)
	{
		if (i < 10)
		{
			putchar ((i % 10) + '0');
		}
		else
			putchar ((i % 10) + 'a');
	}
	putchar ('\n');
	return (0);
}
