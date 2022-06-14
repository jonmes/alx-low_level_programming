#include "main.h"

/**
 * main -  prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char string[15]= "_putchar";
	int i = 0;
	while(string[i] != '\0'){
		_putchar(string[i]);
		i++;
	}
	return (0);
}
