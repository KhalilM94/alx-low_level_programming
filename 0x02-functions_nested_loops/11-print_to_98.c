/* more headers goes there */
#include "main.h"
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * print_to_98 - Short description, positive_or_negative
 * @a : the ASCII position of the char to test
 * Description: Evaluates sign of a function.
 * Return: 0
 */

void print_to_98(int a)
{
	if (a == 98)
	{
		printf("%d\n", a);
	}
	else if (a < 98)
	{
		printf("%d", a);
		a++;
		while (a <= 98)
		{
			printf(", %d", a);
			a++;
		}
		printf("\n");
	}
	else
	{
		printf("%d", a);
		a--;
		while (a >= 98)
		{
			printf(", %d", a);
			a--;
		}
		printf("\n");
	}
}
