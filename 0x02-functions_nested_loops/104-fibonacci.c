/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Short description, positive_or_negative
 * n : the ASCII position of the char to test
 * Description: Evaluates sign of a function.
 * Return: 0
 */

int main(void)
{
	float fib1 = 1, fib2 = 2, fib;
	int i;

	printf("%.0f, %.0f", fib1, fib2);
	for (i = 2; i < 98; i++)
	{
		fib = fib1 + fib2;
		printf(", %.0f", fib);
		fib1 = fib2;
		fib2 = fib;
	}
	printf("\n");
	return (0);
}
