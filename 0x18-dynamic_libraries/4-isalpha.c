#include "main.h"
/**
 * _isalpha - retun 1 if c is letter, uppercase or lowercase
 * @c: The int to print
 * Return: 0 Always
 */
int _isalpha(int c)
{
if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
return (1);
}
else
{
return (0);
}
}
