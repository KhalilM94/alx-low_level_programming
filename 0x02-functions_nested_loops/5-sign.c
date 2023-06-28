/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_sign - Short description, positive_or_negative
 * @n : the ASCII position of the char to test
 * Description: Evaluates sign of a function.
 * Return: 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
