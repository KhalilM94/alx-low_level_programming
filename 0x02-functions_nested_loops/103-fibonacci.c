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
	int a = 1;
	int b = 2;
	int n = 0;
	int sum = 0;
	int i;

	for (i = 0; b < 4000000; i++)
	{
		if (i % 2 == 0)
			sum = sum + b;
		n = a + b;

		a = b;
		b = n;
	}


	printf("%d\n", sum);
	return (0);
}
