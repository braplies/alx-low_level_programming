#include <stdio.h>
/*
 * main - This program outputs a string without using fwrite.
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	char strl[]1 = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(strl, 1,
			59,
			stderr);
	return(0);
