#include <stdio.h>
/**
* main - main function entry
*
* Return: int(0)
*/
int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		putchar((char) (i + 48));
		for (int j = 0; j < 10; j++)
		{
			putchar((char) (j + 48));
			if (i == j)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar(\n);
}
