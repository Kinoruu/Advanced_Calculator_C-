#include <iostream>
#include <cstdlib>
#include "Basic.h"
#include "Polynomials.h"
#include "AreasOfFigures.h"
#include "PerimetersOfFigures.h"
#include "Trigonometry.h"
#include "LinearFunction.h"
#include "QuadraticFunction.h"
#include "VolumesOfSolids.h"

using namespace std;

int main()
{
  cout << "Hello! Welcome in my calculator. \n What would you like to do? \n \n";
  char chapter;
  int operation;
  cout << " \
  A. Basic matematical operations, \n \
  B. Areas of geometric figures \n \
  C. Perimeters of geometric figures \n \
  D. Trigonometry \n \
  E. Function \n \
  F. Square Function \n \
  G. Volume of solids \n \
  H. Polynomials \n \
    Choose chapter by writing it's symbol: ";
  cin >> chapter;

  switch (chapter)

  {
    float a, b, c, d, x;
  case 'A':
    system("cls");
    cout << "__A. Basic matematical operations \n \
    1. Adding \n \
    2. Substracting \n \
    3. Multiplying \n \
    4. Dividing \n \
    5. Percentage \n \
    6. Power \n \
    7. Factorial \n \
    8. Root \n \
      Choose operation by writing it's symbol: ";
    cin >> operation;
    cout << "\n";
    switch (operation)
    {
    case 1:
      cout << " Adding \n write two numbers to add: \n";
      cin >> a >> b;
      cout << "Result: " << Add(a, b);
      break;
    case 2:
      cout << " Substracting \n write two numbers to Substract: \n";
      cin >> a >> b;
      cout << "Result: " << Substract(a, b);
      break;
    case 3:
      cout << " Multiplying \n write two numbers to multiply: \n";
      cin >> a >> b;
      cout << "Result: " << Multiply(a, b);
      break;
    case 4:
      cout << " Dividing \n write two numbers to divide: \n";
      cin >> a >> b;
      cout << "Result: " << Divide(a, b);
      break;
    case 5:
      cout << " Percentage \n write number and percentage: \n";
      cin >> a >> b;
      cout << "Result: " << Percentage(a, b);
      break;
    case 6:
      cout << " Power \n write base number and exponent \n";
      cin >> a >> b;
      cout << "Result: " << Power(a, b);
      break;
    case 7:
      cout << " Factorial \n write number: \n";
      cin >> a;
      cout << "Result: " << Factorial(a);
      break;
    case 8:
      cout << " Root \n write radicand and index: \n";
      cin >> a >> b;
      cout << "Result: " << Root(a, b);
      break;
    }
    break;
  case 'B':
    system("cls");
    cout << "__B. Areas of geometric figures \n \
     1. Area of triangle while a and h are known \n \
     2. Area of triangle while a, b and c are known \n \
     3. Area of equilaateral triangle while a is known \n \
     4. Area of equilaateral triangle while h is known \n \
     5. Area of square while a is known \n \
     6. Area of rectangle while a and b are known \n \
     7. Area of parallelogram while a and h are known \n \
     8. Area of rhombus while while a and h are known \n \
     9. Area of rhombus while while e and f are known \n \
    10. Area of trapezoid while while a, b and h are known \n \
    11. Area of kite while while e and f are known \n \
    12. Area of circle while while r is known \n \
      Choose operation by writing it's symbol: ";
    cin >> operation;
    cout << "\n";
    switch (operation)
    {
    case 1:
      cout << " Area of triangle \n write a and h: \n";
      cin >> a >> b;
      cout << "Result: " << TriangleA1(a, b);
      break;
    case 2:
      cout << " Area of triangle \n write a, b, c: \n";
      cin >> a >> b >> c;
      cout << "Result: " << TriangleA2(a, b, c);
      break;
    case 3:
      cout << " Area of triangle \n write a: \n";
      cin >> a;
      cout << "Result: " << TriangleEquilateralA1(a);
      break;
    case 4:
      cout << " Area of triangle \n write h: \n";
      cin >> a;
      cout << "Result: " << TriangleEquilateralA2(a);
      break;
    case 5:
      cout << " Area of square \n write a: \n";
      cin >> a;
      cout << "Result: " << SquareA(a);
      break;
    case 6:
      cout << " Area of rectangle \n write a and b \n";
      cin >> a >> b;
      cout << "Result: " << RectangleA(a, b);
      break;
    case 7:
      cout << " Area of parallelogram \n write a and h: \n";
      cin >> a >> b;
      cout << "Result: " << ParallelogramA(a, b);
      break;
    case 8:
      cout << " Area of rhombus \n write a and h: \n";
      cin >> a >> b;
      cout << "Result: " << RhombusA1(a, b);
      break;
    case 9:
      cout << " Area of rhombus \n write e and f: \n";
      cin >> a >> b;
      cout << "Result: " << RhombusA2(a, b);
      break;
    case 10:
      cout << " Area of trapezoid \n write a, b and h: \n";
      cin >> a >> b >> c;
      cout << "Result: " << TrapezoidA(a, b, c);
      break;
    case 11:
      cout << " Area of kite \n write e and f: \n";
      cin >> a >> b;
      cout << "Result: " << KiteA(a, b);
      break;
    case 12:
      cout << " Area of circle \n write r: \n";
      cin >> a;
      cout << "Result: " << CircleA(a);
      break;
    }
    break;
  case 'C':
    system("cls");
    cout << "__C. Perimeters of geometric figures \n \
     1. Perimeter of triangle while a, b and c are known \n \
     2. Perimeter of triangle while a and b are known (isoscales triangle) \n \
     3. Perimeter of equilaateral triangle while a is known \n \
     4. Perimeter of equilaateral triangle while h is known \n \
     5. Perimeter of square while a is known \n \
     6. Perimeter of rectangle while a and b are known \n \
     7. Perimeter of parallelogram while a and b are known \n \
     8. Perimeter of rhombus while a is known \n \
     9. Perimeter of rhombus while e and f are known \n \
    10. Perimeter of trapezoid while a, b, c and d are known \n \
    11. Perimeter of trapezoid while a, b and c are known (isosceles trapezoid) \n \
    12. Perimeter of kite while while a and b are known \n \
    13. Perimeter of circle while while r is known \n \
      Choose operation by writing it's symbol: ";
    cin >> operation;
    cout << "\n";
    switch (operation)
    {
    case 1:
      cout << " Perimeter of triangle \n write a and h: \n";
      cin >> a >> b >> c;
      cout << "Result: " << TriangleP1(a, b, c);
      break;
    case 2:
      cout << " Perimeter of triangle \n write a, b, c: \n";
      cin >> a >> b;
      cout << "Result: " << TriangleP2(a, b);
      break;
    case 3:
      cout << " Perimeter of triangle \n write a: \n";
      cin >> a;
      cout << "Result: " << TriangleEquilateralP1(a);
      break;
    case 4:
      cout << " Perimeter of triangle \n write h: \n";
      cin >> a;
      cout << "Result: " << TriangleEquilateralP2(a);
      break;
    case 5:
      cout << " Perimeter of square \n write a: \n";
      cin >> a;
      cout << "Result: " << SquareP(a);
      break;
    case 6:
      cout << " Perimeter of rectangle \n write a and b \n";
      cin >> a >> b;
      cout << "Result: " << RectangleP(a, b);
      break;
    case 7:
      cout << " Perimeter of parallelogram \n write a and b: \n";
      cin >> a >> b;
      cout << "Result: " << ParallelogramP(a, b);
      break;
    case 8:
      cout << " Perimeter of rhombus \n write a and b: \n";
      cin >> a >> b;
      cout << "Result: " << RhombusP1(a, b);
      break;
    case 9:
      cout << " Perimeter of rhombus \n write e and f: \n";
      cin >> a >> b;
      cout << "Result: " << RhombusP2(a, b);
      break;
    case 10:
      cout << " Perimeter of trapezoid \n write a, b, c and d: \n";
      cin >> a >> b >> c >> d;
      cout << "Result: " << TrapezoidP1(a, b, c, d);
      break;
    case 11:
      cout << " Perimeter of trapezoid \n write a, b and c: \n";
      cin >> a >> b >> c;
      cout << "Result: " << TrapezoidP2(a, b, c);
      break;
    case 12:
      cout << " Perimeter of kite \n write a and b: \n";
      cin >> a >> b;
      cout << "Result: " << KiteP(a, b);
      break;
    case 13:
      cout << " Perimeter of circle \n write r: \n";
      cin >> a;
      cout << "Result: " << CircleP(a);
      break;
    }
    break;
  case 'D':
    system("cls");
    cout << "__D. Trigonometry \n \
     1. Sine of x degree \n \
     2. Cosine of x degree \n \
     3. Tangent of x degree \n \
     4. Cotangent of x degree \n \
     5. Secant of x degree \n \
     6. Cosecant of x degree \n \
     7. Arcsine of x degree \n \
     8. Arccosine of x degree \n \
     9. Arctangent of x degree \n \
    10. Arccotangent of x degree \n \
    11. Arcsecant of x degree \n \
    12. Arccosecant of x degree \n \
    13. Radians to degrees \n \
    14. Degrees to radians \n \
      Choose operation by writing it's symbol: ";
    cin >> operation;
    cout << "\n";
    switch (operation)
    {
    case 1:
      cout << " Sine \n write x: \n";
      cin >> x;
      cout << "Result: " << Sine(x);
      break;
    case 2:
      cout << " Cosine \n write x: \n";
      cin >> x;
      cout << "Result: " << Cosine(x);
      break;
    case 3:
      cout << " Tangent \n write x: \n";
      cin >> x;
      cout << "Result: " << Tangent(x);
      break;
    case 4:
      cout << " Cotangent \n write x: \n";
      cin >> x;
      cout << "Result: " << Cotangent(x);
      break;
    case 5:
      cout << " Secant of square \n write x: \n";
      cin >> x;
      cout << "Result: " << Secant(x);
      break;
    case 6:
      cout << " Cosecant \n write x \n";
      cin >> x;
      cout << "Result: " << Cosecant(x);
      break;
    case 7:
      cout << " Arcsine \n write x: \n";
      cin >> x;
      cout << "Result: " << ArcSine(x);
      break;
    case 8:
      cout << " Arccosine \n write x: \n";
      cin >> x;
      cout << "Result: " << ArcCosine(x);
      break;
    case 9:
      cout << " Arctangent \n write x: \n";
      cin >> x;
      cout << "Result: " << ArcTangent(x);
      break;
    case 10:
      cout << " Arccotangent \n write x: \n";
      cin >> x;
      cout << "Result: " << ArcCotangent(x);
      break;
    case 11:
      cout << " Arcsecant \n write x: \n";
      cin >> x;
      cout << "Result: " << ArcSecant(x);
      break;
    case 12:
      cout << " Arccosecant \n write x: \n";
      cin >> x;
      cout << "Result: " << ArcCosecant(x);
      break;
    case 13:
      cout << " Radians to degrees \n write x: \n";
      cin >> x;
      cout << "Result: " << RadToDeg(x);
      break;
    case 14:
      cout << " Degrees to radiant \n write x: \n";
      cin >> x;
      cout << "Result: " << DegToRad(x);
      break;
    }
    break;
  case 'E':
    break;
  case 'F':
    break;
  case 'G':
    system("cls");
    cout << "__G. Volume of solids \n \
     1. Volume of triangular prism \n \
     2. Volume of cube \n \
     3. Volume of rectangular prism \n \
     4. Volume of parallelogram prism \n \
     5. Volume of rhombus prism \n \
     6. Volume of trapezoid prism \n \
     7. Volume of kite prism \n \
     8. Volume of cylinder \n \
     9. Volume of triangular pyramid \n \
    10. Volume of square pyramid \n \
    11. Volume of rectangluar pyramid \n \
    12. Volume of parallelogram pyramid \n \
    13. Volume of rhombus pyramid \n \
    14. Volume of trapezoid pyramid \n \
    15. Volume of kite pyramid \n \
    16. Volume of cone \n \
    17. Volume of sphere \n \
      Choose operation by writing it's symbol: ";
    cin >> operation;
    cout << "\n";
    switch (operation)
    {
    case 1:
      cout << " Triangular prism \n write a, h and H: \n";
      cin >> a >> b >> c;
      cout << "Result: " << TriangularPrism(a, b, c);
      break;
    case 2:
      cout << " Cube \n write a: \n";
      cin >> a;
      cout << "Result: " << Cube(a);
      break;
    case 3:
      cout << " Rectangular prism \n write a, b and H: \n";
      cin >> a >> b >> c;
      cout << "Result: " << RectangularPrism(a, b, c);
      break;
    case 4:
      cout << " Parallelogram prism \n write a, h and H: \n";
      cin >> a >> b >> c;
      cout << "Result: " << ParallelogramPrism(a, b, c);
      break;
    case 5:
      cout << " Rhombus prism \n write a, h and H: \n";
      cin >> a >> b >> c;
      cout << "Result: " << RhombusPrism(a, b, c);
      break;
    case 6:
      cout << " Trapezoid prism \n write a, b, h and H \n";
      cin >> a >> b >> c >> d;
      cout << "Result: " << TrapezoidPrism(a, b, c, d);
      break;
    case 7:
      cout << " Kite prism \n write e, f and H: \n";
      cin >> a >> b >> c;
      cout << "Result: " << KitePrism(a, b, c);
      break;
    case 8:
      cout << " Cylinder \n write r and H : \n";
      cin >> a >> b;
      cout << "Result: " << Cylinder(a, b);
      break;
    case 9:
      cout << " Triangular pyramid \n write a, h and H: \n";
      cin >> a >> b >> c;
      cout << "Result: " << TriangularPyramid(a, b, c);
      break;
    case 10:
      cout << " Square pyramid \n write a and H: \n";
      cin >> a >> b;
      cout << "Result: " << SquarePyramid(a, b);
      break;
    case 11:
      cout << " Rectangluar pyramid \n write a, b and H: \n";
      cin >> a >> b >> c;
      cout << "Result: " << RectangluarPyramid(a, b, c);
      break;
    case 12:
      cout << " Parallelogram pyramid \n write a, h, H: \n";
      cin >> a >> b >> c;
      cout << "Result: " << ParallelogramPyramid(a, b, c);
      break;
    case 13:
      cout << " Rhombus pyramid \n write a, h and H: \n";
      cin >> a >> b >> c;
      cout << "Result: " << RhombusPyramid(a, b, c);
      break;
    case 14:
      cout << " Trapezoid pyramid \n write a, b, h and H: \n";
      cin >> a >> b >> c >> d;
      cout << "Result: " << TrapezoidPyramid(a, b, c, d);
      break;
    case 15:
      cout << " Kite pyramid \n write e, f and H: \n";
      cin >> a >> b >> c;
      cout << "Result: " << KitePyramid(a, b, c);
      break;
    case 16:
      cout << " Cone \n write r an H: \n";
      cin >> a >> b;
      cout << "Result: " << Cone(a, b);
      break;
    case 17:
      cout << " Sphere \n write r: \n";
      cin >> a;
      cout << "Result: " << Sphere(a);
      break;
    }
    break;
  case 'H':
    system("cls");
    cout << "__H. Polynomials \n \
     1. Divide polynomials \n ";
     //2. Add polynomials \n \
     //3. Substract polynomials \n \
     //4. Multiply polynomials \n 
     cout << "Choose operation by writing it's symbol: ";
    cin >> operation;
    cout << "\n";
    switch (operation)
    {
    case 1:
      cout << " Divide polynomials \n";
      cout << DividePoly();
      break;
    }
    break;
  deafult:
    break;
  }

}
