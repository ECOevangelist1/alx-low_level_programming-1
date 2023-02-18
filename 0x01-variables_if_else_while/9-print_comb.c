#include <stdio.h>
/**
* main - main function entry point
* 
* Return: int(0)
*/
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar((char) (number + 48));
		putchar(',');
		putchar(' ')
	}
	putchar('$');
}