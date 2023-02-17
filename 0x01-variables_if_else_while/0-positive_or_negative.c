#include <stdlib.h>
#include <time.h>
#include <unistd.h>
/**
 * main -main function entry
 * @n: number to be compared
 * @mes: String to be dislayed
 *
 * Return: (1);
 */
int main(void)
{
  int n;
  char *mes;
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  if (n > 0)
    {
      *mes = "is positive\n";
      write(1, mes, strlen(mes));
    }
  else if (n == 0)
    {
      *mes = "is zero\n";
      write(1, mes, strlen(mes));
    }
  else if (n < 0)
    {
      *mes = "is negative\n";
      write(1, mes, strlen(mes));
    }
}
