#include "2DCoordinate.h"


CartesianCoordinate2D::CartesianCoordinate2D() {
    this->x = 0.0;
    this->y = 0.0;
}

CartesianCoordinate2D::CartesianCoordinate2D(double x, double y)
{
    this->x = x;
    this->y = y;
}

// Implementing Copy Constructor

CartesianCoordinate2D::CartesianCoordinate2D(CartesianCoordinate2D& c) {

    this->x = c.x;
    this->y = c.y;
}

double CartesianCoordinate2D::getX()
{
    return this->x;
}
double CartesianCoordinate2D::getY()
{
    return this->y;
}
void CartesianCoordinate2D::setX(double x)
{
    this->x = x;
}
void CartesianCoordinate2D::setY(double y)
{
    this->y = y;
}
double CartesianCoordinate2D::distanceFromOrigin()
{
    return sqrt(x * x + y * y);
}
int CartesianCoordinate2D::quadrant()
{
    if (x > 0 && y > 0)
    {
        return 1;
    }
    else if (x < 0 && y > 0)
    {
        return 2;
    }
    else if (x < 0 && y < 0)
    {
        return 3;
    }
    else if (x > 0 && y < 0)
    {
        return 4;
    }
    else
    {
        return 0;
    }
}

// Implementing All other functions

void CartesianCoordinate2D::operator=(const CartesianCoordinate2D& c) {

    this->x = c.x;
    this->y = c.y;
}

CartesianCoordinate2D CartesianCoordinate2D::operator-(const CartesianCoordinate2D& c) {

    CartesianCoordinate2D coor;

    coor.x = this->x - c.x;
    coor.y = this->y - c.y;

    return coor;
}

void CartesianCoordinate2D::operator-=(const CartesianCoordinate2D& c) {

    this->x -= c.x;
    this->y -= c.y;
}

ostream& operator<<(ostream& out, const CartesianCoordinate2D& c) {
    
    out << "(" << c.x << ", " << c.y << ")";
    return out;
}

bool operator>(const CartesianCoordinate2D& a, const CartesianCoordinate2D& b) {
    
    CartesianCoordinate2D first(a.x, a.y);
    CartesianCoordinate2D second(b.x, b.y);

    
    if (first.distanceFromOrigin() > second.distanceFromOrigin())
    {
        return true;
    }
    else
    {
        return false;
    }
}


