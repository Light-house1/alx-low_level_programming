#include"main.h"
/**
 * factorial(int n) prints the factorial of the number
 * n is number 
 * Return: factorial of number
 **/
int factorial(int n);
{
	if (n < 0)
		return (-1)
	if (n == 0 || n == 1)
	{
		return(1);
	}
	return (n * factorial(n - 1));
}
