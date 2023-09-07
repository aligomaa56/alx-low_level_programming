#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program using sizeof to print the size of various types.
 *
 * Return: Alawys 0 (Success)
*/

int main(void)
{
	printf("Size of a char: %u byts(s)\n", sizeof(char));
	printf("Size of an int: %u byts(s)\n", sizeof(int));
	printf("Size of a long int: %u byts(s)\n", sizeof(long int));
	printf("Size of a long long int: %u byts(s)\n", sizeof(long long int));
	printf("Size of a float: %u byts(s)\n", sizeof(float));
	return (0);
}
