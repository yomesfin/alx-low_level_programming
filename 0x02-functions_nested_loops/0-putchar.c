#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int arr[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int arrLen = sizeof(arr) / sizeof(arr[0]);
	int i = 0;

	while (i < arrLen)
	{
		putchar (arr[i]);
		i++;
	}
	putchar('\n');
	return (0);
}

