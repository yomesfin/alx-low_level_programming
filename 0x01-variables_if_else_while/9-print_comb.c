#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar (i);
		i += 1;
		if (i == 58)
		{
			break;
		}
		putchar (',');
		putchar(' ');
	}
	return (0);
}
