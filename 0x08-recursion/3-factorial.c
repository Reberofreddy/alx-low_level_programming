#include "main"

/**
  *factorial - Write a function that returns the factorial
  *@: the number to calculate the factorial
  *Return: integer value
  */
int factorial(int i)
{
if(i < 0)
return (-1);
if (i <= 1)
return (1);
return (i * factorial(i - 1));
}
