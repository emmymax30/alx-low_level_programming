#include "main.h"
/**
 * _isalpha - retun 1 if c is letter, uppercase or lowercase
 *
 * Return: 0 Always
 */
int _isalpha(int c)
{
if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
returm (1);
}
else
{
returm (0);
}
}
