/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * _abs - Short description, positive_or_negative
 * @n : the ASCII position of the char to test
 * Description: Evaluates sign of a function.
 * Return: 0
 */

int  _abs(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	return (n);
}
