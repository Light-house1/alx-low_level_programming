#include"main.h"
/**
 * main - check the code
 * _isdigit
 * *@0 : first number
 * *@9 : second number
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);

}
