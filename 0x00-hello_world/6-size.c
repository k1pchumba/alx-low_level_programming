#include<stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	printf("size of int: %lu bytes \n", sizeof(intType));
	printf("size of float: %lu bytes\n", sizeof(floatType));
	printf("size of double: %lu bytes\n", sizeof(doubleType));
	printf("size of char: %lu bytes \n", sizeof(charType));
	return (0);
}

