#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s[60] = "and that piece of art is useful\" - Diora Korpar, 2015-10-19\n";

	write(2, s, 60);
	return (1);
}
