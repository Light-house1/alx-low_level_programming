#include<stdio.h>
/** Fizz-Buzz test” is an interview question
 *  that prints the numbers from 1 to 100
*/
int main()
{
	int c;
	for (c = 1; c <= 100; c++)
	{
		if (c % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (c % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (c % 3 == 0)
		{
			printf("Fizz ");
		}
		else
			printf("%d ",c);

	}
	return (0);
}
