#include "main.h"
/**
 * _abs - print absolute
 * @abs: parameter to modify is abs
 * Return: abs value of parameter
 */
int _abs(int abs)
{
	if (abs < 0)
	{
		return (abs * -1);
	}
	return (abs);
}
