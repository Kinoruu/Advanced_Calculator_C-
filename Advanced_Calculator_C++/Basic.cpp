#include <iostream>
#include <cstdlib>
#include "Basic.h"

using namespace std;

//float a, b;

float Add(float a, float b)
{
  return a + b;
}

float Substract(float a, float b)
{
  return a - b;
}
float Multiply(float a, float b)
{
  return a * b;
}
float Divide(float a, float b)
{
  if (b == 0) { cout << "You can't divide by 0"; }
  else { return a / b; }
}
float Percentage(float a, float b)
{
  return (a * b) / 100;
}
float Power(float a, float b)
{
  //if (b != 0) return a * power(a, b - 1);   //simple version 
  //else { return 1; }

  return pow(a, b);
}
float Factorial(float a)
{
  if (a > 1) { return a * Factorial(a - 1); }
  else { return 1; }
}
float Root(float a, float b)
{
  return pow(a, (1 / b));
}