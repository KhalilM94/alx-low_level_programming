/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_last_digit - Short description, positive_or_negative
 * @n : the ASCII position of the char to test
 * Description: Evaluates sign of a function.
 * Return: 0
 */

int print_last_digit(int n)
{
	int l = n < 0 ? -(n % 10) : n % 10;

	_putchar('0' + l);
	return (l);
}
