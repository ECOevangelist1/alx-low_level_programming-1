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

    for (int i = letter; i <= 'z'; i++)
    {
        putchar(letter);
    }
        putchar("");
    return (0);
}
