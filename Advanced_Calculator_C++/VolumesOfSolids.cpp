#include "VolumesOfSolids.h"
#include "AreasOfFigures.h"
#include <iostream>
#include <cstdlib>

#define M_PI (3.14159265358979323846)

using namespace std;

float TriangularPrism(float a, float h, float H)
{
  return TriangleA1(a, h) * H;
}
float Cube(float a)
{
  return SquareA(a) * a;
}
float RectangularPrism(float a, float b, float H)
{
  return RectangleA(a, b) * H;
}
float ParallelogramPrism(float a, float h, float H)
{
  return ParallelogramA(a, h) * H;
}
float RhombusPrism(float a, float h, float H)
{
  return RhombusA1(a, h) * H;
}
float TrapezoidPrism(float a, float b, float h, float H)
{
  return TrapezoidA(a, b, h) * H;
}
float KitePrism(float e, float f, float H)
{
  return KiteA(e, f) * H;
}
float Cylinder(float r, float H)
{
  return CircleA(r) * H;
}

float TriangularPyramid(float a, float h, float H)
{
  return (TriangleA1(a, h) * H) / 3;
}
float SquarePyramid(float a, float H)
{
  return (SquareA(a) * H) / 3;
}
float RectangluarPyramid(float a, float b, float H)
{
  return (RectangleA(a, b) * H) / 3;
}
float ParallelogramPyramid(float a, float h, float H)
{
  return (ParallelogramA(a, h) * H) /3;
}
float RhombusPyramid(float a, float h, float H)
{
  return (RhombusA1(a, h) * H) / 3;
}
float TrapezoidPyramid(float a, float b, float h, float H)
{
  return TrapezoidA(a, b, h) * H;
}
float KitePyramid(float e, float f, float H)
{
  return (KiteA(e, f) * H) / 3;
}
float Cone(float r, float H)
{
  return (CircleA(r) * H) / 3;
}

float Sphere(float r)
{
  return (4 * M_PI * pow(r, 3)) / 3;
}