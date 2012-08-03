#include<stdio.h>
#include<stdlib.h>

int main()
{
  printf("Answer: %d\n",ex1());

  return 0;
}

int ex1()
{
  int i = 0;
  int total = 0;

  for (i = 0; i < 1000; i++)
  {
    if ((0 == i % 3) || (0 == i % 5))
    {
      total += i;
    }
  }

  return total;
}
