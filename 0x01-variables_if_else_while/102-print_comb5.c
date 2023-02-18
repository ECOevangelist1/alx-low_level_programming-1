#include <stdio.h>
/**
* main - main function entry
*
* Return: int(0)
*/
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 7; i++)
	{
		for (j = i + 1; j < 8; j++)
		{
			for (k = j + 1; k < 9; k++)
			{
				for (l = k + 1; l < 10; l++)
				{
					putchar((char) (i + 48));
					putchar((char) (j + 48));
					putchar(' ');
					putchar((char) (k + 48));
					putchar((char) (l + 48));
					if (i == 6 && j == 7 && k == 8 && l == 9)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
