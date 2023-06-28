/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * _isalpha - Short description, positive_or_negative
 * @c : the ASCII position of the char to test
 * Description: Evaluates sign of a function.
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
		return (1);
	else
		return (0);
}
