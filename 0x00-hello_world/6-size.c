#include<stdio.h>
/**
* main - Entry point
* 
* Return: Always 0 (success)
*/
int main(void)
{
	printf("Size of char: %zu bytes\n", sizeof(char));
        printf("Size of an int: %zu bytes\n", sizeof(int));
        printf("Size of long int: %zu bytes\n", sizeof(long));
        printf("Size of long long int: %zu bytes\n", sizeof(long long));
        printf("Size of float: %zu bytes\n", sizeof(float));
	return (0);
}	
