#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char achar;
	int figure;
	long along;
	long long alongfigure;
	float floatfigure;

	printf("Size of a char: %lu byte(s)\n", sizeof(achar));
	printf("Size of an int: %lu byte(s)\n", sizeof(figure));
	printf("Size of a long int: %lu byte(s)\n", sizeof(along));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(alongfigure));
	printf("Size of a float: %lu byte(s)\n", sizeof(floatfigure));

	return (0);
}
