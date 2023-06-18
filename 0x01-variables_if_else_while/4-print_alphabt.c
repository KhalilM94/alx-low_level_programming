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
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar (c);
		}
	}
	putchar ('\n');
	return (0);
}
