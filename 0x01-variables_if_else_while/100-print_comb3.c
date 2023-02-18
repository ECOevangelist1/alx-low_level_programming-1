#include <stdio.h>
/**
* main - main function entry
*
* Return: int(0)
*/
int main(void)
{
	int i,j;

	for (i = 0; i < 9; i++)
	{
		for (j = 1; j < 10; j++)
		{
			if (i == j)
				continue;
			putchar((char) (i + 48));
			putchar((char) (j + 48));
			putchar(',');
			putchar(' ');
		}
		
	}
	putchar('\n');
	return (0);
}
