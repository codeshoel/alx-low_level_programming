#include "main.h"
/**
* _abs - Computes absolute value of an integer
* @n: integer to check
*
* Return: n
*/

int _abs(int n)
{
	if (n >= 0)
		return (n);

	else
	{
		n *= -1;
		return (n);
	}
}
