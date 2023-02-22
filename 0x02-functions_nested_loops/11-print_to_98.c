#include "main.h"
#include "6-abs.c"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural nubers from input to 98 
 *              
 * @n: The number to begin counting at. 
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	} else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}

