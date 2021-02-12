#include <stdio.h>
#include <stdlib.h>

int fibonnaci(int num)
{
  if (num == 1 || num == 0)
  {
    return 1;
  }

  return fibonnaci(num - 1) + fibonnaci(num - 2);
}

void main()
{
  char buffer[20];

  int number = fibonnaci(11);
  itoa(number, buffer, 10);

  printf(buffer);
}