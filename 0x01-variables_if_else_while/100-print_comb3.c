#include <stdio.h>
/**
* main - main function entry
*
* Return: int(0)
*/
int main(void)
{
	int i,j;

	for (i = 0; i < 10; i++)
	{
		putchar((char) (i + 48));
		for (j = 0; j < 10; j++)
		{
			putchar((char) (j + 48));
			if (i == j)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
