#include "main.h"
/**
 * _putchar_recursion - function like puts();
 * @s: input
 * Return: Always 0 (success)
 */
void _puts_recursion(char *r)
{
	if (*r)
	{ _putchar(*r);
		_puts_recursion(r + 1);
	}
	else
		putchar("\n");

}
