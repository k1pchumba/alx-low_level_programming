#include<stdio.h>
#include"main.h"

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char text[] = "_putcher";
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(text[i]);
	}
	_putcher('\n');
	return (0);
	}
