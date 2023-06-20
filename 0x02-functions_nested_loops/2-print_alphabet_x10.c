#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * print_alphabet_x10 - Short description, positive_or_negative
 * void : Description of parameter x
 *
 * Description: Evaluates sign of a function.
 * Return: 0
 */
void print_alphabet_x10(void)
{

	/* your code goes there */
	int c;

	c = 0;
	while (c < 10)
	{
		print_alphabet();
		c++;
	}
	_putchar('\n');
	return ();
}
