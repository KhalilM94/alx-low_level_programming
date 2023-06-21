/* more headers goes there */
#include <unistd.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * _putchar - Short description
 * @c: The character to print
 * Description: Evaluates sign of a function.
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
