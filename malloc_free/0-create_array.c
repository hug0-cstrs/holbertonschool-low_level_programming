#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - function that create an array of given size
 *@size: size of the array to be created
 *@c: character to put in the array
 *Return: NULL or a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(size * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
