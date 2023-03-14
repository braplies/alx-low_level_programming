#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * char *create_array - creat an array and initializes it with a specific char
 * @c : initializes the array
 * @size: the size of the array to be filled
 *
 * Return: Pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(size * sizeof(char));
	if (size == 0 || !ptr)
		return ('\0');
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
