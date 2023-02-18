#include <stdio.h>
/**
* main - main funtion entry
*
* print letters of the alphabet
* Return: int(0)
*/
int main(void)
{
	char letter;
	int number;

	for (number = 0; number >= 9; number++)
	{
		putchar((char) (number + 48));
	}
	for (letter = 'a'; letter >= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
