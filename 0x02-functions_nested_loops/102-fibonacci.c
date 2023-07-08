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
	long a = 1;
	long b = 2;
	long f = 0;
	int i = 0;

	printf("%li, %li, ", a, b);

	for (i = 0; i < 48; i++)
	{
		f = a + b;
		printf("%li", f);

		if (i % 2 == 0)
			a = f;
		else
			b = f;
		if (i != 47)
			printf(", ");
	}
	printf("\n");
	return (0);
}
