#include <iostream>

#include "2DCoordinate.h"

int main()
{
	CartesianCoordinate2D p1;
	double x;
	double y;
	std::cout << "Enter the coordinates of the point(example: 4 -3): " << std::endl;
	std::cin >> x >> y;
	p1.setX(x);
	p1.setY(y);
	std::cout << "Distance coordinates from origin is: " << p1.distanceFromOrigin() << std::endl;
	std::cout << "Quadrent coordinates are located in is: " << p1.quadrant() << std::endl;

	// Checking All new implemented methods

	CartesianCoordinate2D p11;
	p11.setX(6.0);
	p11.setY(2.0);

	std::cout << "p1 = " << p11 << std::endl;

	std::cout << "Using Copy constructor" << std::endl;
	CartesianCoordinate2D p2;
	p2 = p11;

	std::cout << "p2 = " << p2 << std::endl;

	std::cout << "Subtraction Result" << std::endl;
	std::cout << p11 - p2 << std::endl;

	CartesianCoordinate2D p3(2, 1);
	std::cout << "p3 = " << p3 << std::endl;

	p3 -= p11;

	std::cout << "p3 -= p1 -> " << p3 << std::endl;

	bool isGreater = p2 > p3;

	std::cout << "p2 > p3 " << std::boolalpha << isGreater;

	return 0;
}