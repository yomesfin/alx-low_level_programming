#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int integerType;
	long int longintType;
	long long int longlongintType;
	float floatType;
	double doubleType;
	char charType;

	/*Sizeof operator is used to evaluate the size of a variable*/
	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
	printf("Size of an int: %ld byte(s)\n", sizeof(integerType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longlongintType));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatType));
	return (0);
}
