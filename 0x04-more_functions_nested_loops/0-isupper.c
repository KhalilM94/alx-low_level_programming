#include "main.h"

/**
 * _isupper - tests a character is uppercase
 * @c: ASCII character to be checked
 *
 * Return: 1 if it is uppercase and 0 if it isnt
 */
int _isupper(int c)
{
  if (c >= 65 && c <= 90)
    return (1);
  else
    return (0);
}
