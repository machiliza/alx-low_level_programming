#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - dertermine if a random number is positive, negative or zero.
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		std::cout << "is positive" << std::endl;
	}
	else if (n < 0)
	{
		std::cout << "is negative" << std::endl;
	}
	else 
	{
		std::cout << "is zero" << std::endl;
	}
	return (0);
}	
