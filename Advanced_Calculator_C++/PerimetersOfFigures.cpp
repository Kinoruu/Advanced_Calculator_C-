#include <iostream>
#include <cstdlib>
#include "PerimetersOfFigures.h"

#define M_PI (3.14159265358979323846)

using namespace std;

float Pythagoras(float a, float b)
{
  return sqrt(pow(a, 2) + pow(b, 2));
}

float TriangleP1(float a, float b, float c)
{
  return a + b + c;
}
float TriangleP2(float a, float b)
{
  return a + (2 * b);
}
float TriangleEquilateralP1(float a)
{
  return 3 * a;
}
float TriangleEquilateralP2(float a)
{
  return 3 * (a / sqrt(3));
}
float SquareP(float a)
{
  return 4 * a;
}
float RectangleP(float a, float b)
{
  return 2 * (a + b);
}
float ParallelogramP(float a, float b)
{
  return 2 * (a + b);
}
float RhombusP1(float a, float b)
{
  return 4 * a;
}
float RhombusP2(float e, float f)
{
  return 4 * Pythagoras(e / 2, f / 2);
}
float TrapezoidP1(float a, float b, float c, float d)
{
  return a + b + c + d;
}
float TrapezoidP2(float a, float b, float c)
{
  return a + b + (2 * c);
}
float KiteP(float a, float b)
{
  return 2 * (a + b);
}
float CircleP(float r)
{
  return 2 * M_PI * r;
}