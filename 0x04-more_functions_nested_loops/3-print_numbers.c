#include "main.h"
/**
 *print_numbers - printing
 *return: void
 */
void print_numbers(void)
{
	char number = '0';

	while (number <= '9')
	{
		_putchar(number);
		number++;
	}

	_putchar('\n');
}
