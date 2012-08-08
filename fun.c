#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
  printf("Answer: %d\n", ex4());

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

int sum_of_squares(int n)
{
  int i = 0;
  int total = 0;

  for(i = 1; i < n; i++)
  {
    total += pow(i, 2);
  }

  return total;
}

int square_of_sum(int n)
{
  int i = 0;
  int total = 0;

  for (i = 0; i < n; i++)
  {
    total += i;
  }

  return pow(total, 2);
}

int ex6()
{
  return square_of_sum(101) - sum_of_squares(101);
}

int ex5()
{
  int i = 1;
  int n = 1;
  int max = 20;

  for(i = 1; i <= max; i++)
  {
    if (0 != (n % i))
    {
      n++;
      i = 0;
    }

    else if(max == i)
    {
      return n;
    }
  }

  return -1;
}

int is_prime(int n)
{
  int i = 2;

  for (i = 2; i < sqrt(n); i++)
  {
    if(0 == n % i)
    {
      return 0;
    }
  }

  return 1;
}

int ex3()
{
  int i = 3;
  double num = 600851475143;
  int largest_prime = 0;

  for(i = 3; i < sqrt(num); i += 2)
  {
    if(is_prime(i))
    {
      if(0 == fmod(num, i))
      {
        largest_prime = i;
      }
    }
  }

  return largest_prime;
}

int is_palindrome(char[] str, int length)
{
  char reversed[length];
  strncpy(reversed, str, length);
  strrev(reversed);
  if(0 == strncmp(str, reversed))
  {
    printf("palindrome!");
  }
  else
  {
    printf("not a palindrome!");
  }

  return 0;
}

int ex4()
{

  return 0;
}
