#include "main.h"
#include <stdlib.h>
/**
 * create_array - ceates an array of characters
 * @size: size of array
 * @c: char
 * Return : NULL if it fails
 */

char *create_array(unsigned int size, char c);
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	/* Define valuses using malloc */

	if (arr == 0)
	{
		return (NULL);
	}

	else
	{
		i = 0;
		while (i < size)
		{
			*(arr + i) = c;
			i++;
		}

		return (arr);
	}
}
