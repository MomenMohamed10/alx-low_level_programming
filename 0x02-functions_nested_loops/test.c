#include "main.h"
/**
 * main - Entry
 *
 * Description: print_alphabet
 *
 * print_alphabet - print _putchar
 *
 * Return: 0
*/

	void print_alphabet(void)
	{
		char letter;


		for (letter = 'a'; letter <= 'z'; letter++);
			_putchar(letter);


		_putchar('\n');
	}
