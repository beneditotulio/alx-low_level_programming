#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Retutn: void
 */

void print_alphabet(void)
{
	char letter = 'a';
	int count = 0;

	while (count < 10)
	{

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		count++;
	}
}
