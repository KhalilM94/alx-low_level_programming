#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include "1-alphabet.c"
/* betty style doc for function main goes there */
/**
 * print_alphabet - Short description, positive_or_negative
 * void: Description of parameter x
 *
 * Description: Evaluates sign of a function.
 * Return: 0
 */
void print_alphabet(void)
{

	/* your code goes there */
	int c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);
}
