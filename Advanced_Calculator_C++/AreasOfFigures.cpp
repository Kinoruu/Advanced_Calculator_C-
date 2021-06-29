#include <iostream>
#include <cstdlib>
#include "AreasOfFigures.h"
#include <math.h>
#include <cmath>
//#define _USE_MATH_DEFINES
//#ifndef M_PI
#define M_PI (3.14159265358979323846)

using namespace std;

float TriangleA1(float a, float h)
{
  return (a * h) / 2;
}
float TriangleA2(float a, float b, float c)
{
  float half_perimeter = (a + b + c) / 2;
  return sqrt(half_perimeter * ((half_perimeter - a)*(half_perimeter - b)*(half_perimeter - c)));
}
float TriangleEquilateralA1(float a)
{
  return (pow(a, 2) * sqrt(3)) / 4;
}
float TriangleEquilateralA2(float a)
{
  return (pow(a, 2) / (2 * sqrt(3)));
}
float SquareA(float a)
{
  return pow(a, 2);
}
float RectangleA(float a, float b)
{
  return a * b;
}
float ParallelogramA(float a, float h)
{
  return a * h;
}
float RhombusA1(float a, float h)
{
  return a * h;
}
float RhombusA2(float e, float f)
{
  return (e * f) / 2;
}
float TrapezoidA(float a, float b, float h)
{
  return ((a + b) * h) / 2;
}
float KiteA(float e, float f)
{
  return (e * f) / 2;
}
float CircleA(float r)
{
  return M_PI * pow(r, 2);
}

//#endif