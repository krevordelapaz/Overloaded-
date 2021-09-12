#pragma once


#include <math.h>
#include <iostream>
using namespace std;

class CartesianCoordinate2D
{
private:
   double x, y;
public:
   CartesianCoordinate2D();
   CartesianCoordinate2D(double, double);

   // Copy Constructor
   CartesianCoordinate2D(CartesianCoordinate2D &);

   double getX();
   double getY();
   void setX(double);
   void setY(double);
   double distanceFromOrigin();
   int quadrant();
  
   // Copy Assignment operator
  
   void operator=(const CartesianCoordinate2D &);
  
   // Override + operator
  
   CartesianCoordinate2D operator-(const CartesianCoordinate2D&);
  
   // += operator
  
   void operator-=(const CartesianCoordinate2D&);

   // << operator
  
   friend ostream &operator<<(ostream &, const CartesianCoordinate2D &);

   // > operator
   friend bool operator>(const CartesianCoordinate2D& a, const CartesianCoordinate2D& b);

};
