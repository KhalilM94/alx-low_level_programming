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

	for (i = 0; i <= 9; i++)
	{
		putchar ((i % 10) + '0');
	}
	putchar ('\n');
	return (0);
}
