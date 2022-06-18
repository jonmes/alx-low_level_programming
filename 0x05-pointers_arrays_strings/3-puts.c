#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: input string.
 * Return: no return.
 */
void _puts(char *str)
{
	int count = 0;

	while (*(str + count) != '\0')
	{
		_putchar(str[count]);
		count++;
	};
	_putchar('\n');
}
