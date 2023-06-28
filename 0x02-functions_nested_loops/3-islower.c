/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * _islower - Short description, positive_or_negative
 * @c : the ASCII position of the char to test
 * Description: Evaluates sign of a function.
 * Return: 0
 */
int _islower(int c)
{
	/* your code goes there */
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
