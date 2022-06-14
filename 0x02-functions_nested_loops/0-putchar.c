#include "main.h"

/**
 * main -  prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char string[20] = "_putchar\n";
	int i = 0;

	while( string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
	}
	return (0);
}
