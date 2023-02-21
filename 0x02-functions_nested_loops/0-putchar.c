#include "main.h"
/**
 * main - Print "_putchar" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */
int main(void)
{
	char Kennedy[] = "Kennedy";
	int i = 0;

	while (Kennedy[i] != '\0')
	{
		_putchar(Kennedy[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
