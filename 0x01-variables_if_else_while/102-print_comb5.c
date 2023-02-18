#include <stdio.h>
/**
* main - main function entry
*
* Return: int(0)
*/
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k =  0; k < 10; k++)
			{
				for (l = 1; l < 10; l++)
				{
					putchar((char) (i + 48));
					putchar((char) (j + 48));
					putchar(' ');
					putchar((char) (k + 48));
					putchar((char) (l + 48));
					if (i == 8 && j == 9 && k == 9 && l == 9)
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
