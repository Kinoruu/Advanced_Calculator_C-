#include <iostream>
#include <cstdlib>
#include "Trigonometry.h"
#include <math.h>

#define M_PI (3.14159265358979323846)

using namespace std;

float Sine(float x)
{
  return sin((x * M_PI) / 180);
}
float Cosine(float x)
{
  return cos((x * M_PI) / 180);
}
float Tangent(float x)
{
  return tan((x * M_PI) / 180);
}
float Cotangent(float x)
{
  return 1 / Tangent(x);
}
float Secant(float x)
{
  return 1 / Cosine(x);
}
float Cosecant(float x)
{
  return 1 / Sine(x);
}
float ArcSine(float x)
{
  return asin((x * M_PI) / 180);
}
float ArcCosine(float x)
{
  return acos((x * M_PI) / 180);
}
float ArcTangent(float x)
{
  return atan((x * M_PI) / 180);
}
float ArcCotangent(float x)
{
  return 1 / ArcTangent(x);
}
float ArcSecant(float x)
{
  return 1 / ArcCosine(x);
}
float ArcCosecant(float x)
{
  return 1 / ArcSine(x);
}
float RadToDeg(float x)
{
  return (x * 2 * M_PI) / 360;
}
float DegToRad(float x)
{
  return (x * 360) / (2 * M_PI);
}