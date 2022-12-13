#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	int j = 49;

	for (i  = 48; i <= 57; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			putchar (i);
			putchar (j);
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
