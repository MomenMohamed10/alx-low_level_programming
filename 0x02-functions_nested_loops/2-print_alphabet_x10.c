#include "main.h"

/**
 * main - entry point 
 * print_alphabet_x10: ya rab tnga7
 *
*/

void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; line <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
