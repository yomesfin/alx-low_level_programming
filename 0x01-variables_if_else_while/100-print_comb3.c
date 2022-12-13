#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;

	for (i  = 48; i <= 57; i++)
	{
		int j = i+1;

		for (j = i+1; j <= 57; j++)
		{
			putchar (i);
			putchar (j);
			if (i+1 != 57){
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
