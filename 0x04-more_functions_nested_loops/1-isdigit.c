#include"main.h"
/**
 * main - check the code
 * _isdigit - function that check if it is a digit
 * @c: takes in a character or digit
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);

}
