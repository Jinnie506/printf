#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 *DecimalCase - Print integer
 *@arg: argument
 *Return: Int
 */
int DecimalCase(va_list arg)
{
	int x = va_arg(arg, int), BaseExp = 1, len = 0, num;

	if (x < 0)
	{
		len += _putchar('-');
		num = x * (-1);
	}
	else
	{num = x; }
	while (num / BaseExp > 9)
	{BaseExp *= 10; }
	while (BaseExp != 0)
	{
		len += _putchar(num / BaseExp + '0');
		num %= BaseExp;
		BaseExp /= 10;
	}
	return (0);
}

/**
 *IntegerCase - Print integer
 *@arg: argument
 *Return: Int
 */
int IntegerCase(va_list arg)
{
	int x = va_arg(arg, int), BaseExp = 1, len = 0, num;

	if (x < 0)
	{
		len += _putchar('-');
		num = x * (-1);
	}
	else
	{num = x; }
	while (num / BaseExp > 9)
	{BaseExp *= 10; }
	while (BaseExp != 0)
	{
		len += _putchar(num / BaseExp + '0');
		num %= BaseExp;
		BaseExp /= 10;
	}
	return (0);
}
