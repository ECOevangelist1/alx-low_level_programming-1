#include <stdio.h>
/**
* main - main funtion entry
*
* print letters of the alphabet
* Return: int(0)
*/
int main(void)
{
    char letter = 'a';

    for (letter; letter <= 'z'; letter++)
    {
        putchar(letter);
    }
        putchar("\n");
    return (0);
}
