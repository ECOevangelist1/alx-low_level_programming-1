#include <stdio.h>
/**
* main - main function entry
*
* Program to print all base 10 digits as char
* Return: int(0)
*/
int main(void)
{
	int number;
	char letter;

	for (number = 0; number < 10; number++)
		letter = number + 45;
		putchar(letter);
	putchar('\n');
	return (0);
}
