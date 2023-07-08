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
	int a = 3;
	int b = 5;
	int sum = 0;
	int i;

	for (i = 0; a * i < 1024; i++)
		sum += a * i;

	for (i = 0; b * i < 1024; i++)
		sum += b * i;

	for (i = 0; a * b * i < 1024; i++)
		sum -= a * b * i;

	printf("%d\n", sum);
	return (0);
}
