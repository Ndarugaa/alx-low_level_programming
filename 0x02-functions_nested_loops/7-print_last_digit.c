#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @num: Number to check
 * Return: value of last digit
 */

int print_last_digit(int num)
{
	if (num < 0)
		num *= -1;

	_putchar('0' + (num % 10));

	return (num % 10);
}
