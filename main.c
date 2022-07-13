#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * main - test file
 * Program starts execution from here
 * Return: always 0
 */
int main(void)
{
	int count_std = 0;
	int count_hmd = 0;

	write(1, "STANDARD:\n", 10);
	count_std = printf("My name starts with: %c\n", 'I');
	count_std = printf("My name is %s \n", "Ibukun");
	printf("I printed %d characters\n", count_std);

	write(1, "________________________\n", 25);

	write(1, "HOME_MADE:\n", 11);
	count_hmd = _printf("My name starts with: %c\n", 'I');
	count_hmd = _printf("My name is %s\n", "Ibukun");
	printf("I printed %d characters\n", count_hmd);

	return (0);
}
