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
	unsigned long a = 1, b = 2, sum = 0;
	int i;

	printf("%lu, ", a);
	for (i = 0; i < 98; i++)
	{
		printf("%lu, ", b);
		sum = a + b;
		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}
