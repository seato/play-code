#include<stdio.h>
#include<stdlib.h>

int main()
{
  printf("Answer: %d\n",ex2());

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

int ex2()
{
  int i = 0;
  int f0 = 1;
  int f1 = 2;

  int total = 0;

  while(f1 < 4000000)
  {
    if (0 == f1 % 2)
    {
      total += f1;
    }

    f1 += f0;
    f0 = f1 - f0;
  }

  return total;
}
