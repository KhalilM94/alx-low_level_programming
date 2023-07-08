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
	unsigned long fib1 = 1, fib2 = 2, fib;
	unsigned long fib1_1, fib1_2, fib2_1, fib2_2;
	unsigned long m, n;
	int i;

	printf("%lu, %lu", fib1, fib2);
	for (i = 2; i < 92; i++)
	{
		fib = fib1 + fib2;
		printf(", %lu", fib);
		fib1 = fib2;
		fib2 = fib;
	}
	fib1_1 = fib1 / 10000000000;
	fib1_2 = fib1 % 10000000000;
	fib2_1 = fib2 / 10000000000;
	fib2_2 = fib2 % 10000000000;

	for (i = 92; i < 98; i++)
	{
		m = fib1_1 + fib2_1;
		n = fib1_2 + fib2_2;
		if (fib1_2 + fib2_2 > 9999999999)
		{
			m += 1;
			n %= 10000000000;
		}

		printf("%lu%lu", m, n);
		if (i != 97)
			printf(", ");

		fib1_1 = fib2_1;
		fib1_2 = fib2_2;
		fib2_1 = m;
		fib2_2 = n;
	}
	printf("\n");
	return (0);
}
