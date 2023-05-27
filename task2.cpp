#include <iostream>
#include "Point.h"
const char* FILE_NAME = "data.txt";

int main()
{
	Point point;

	double x, y, z;

	std::cout << "Enter the x, y, z: " << '\n';
	std::cin >> x >> y >> z;
	point.set_x(x);
	point.set_y(y);
	point.set_z(z);
	std::cout << point.get_x() << '\t';
	std::cout << point.get_y() << '\t';
	std::cout << point.get_z() << '\n';
	point.writeToFile();
	point.readFromFile(FILE_NAME);
}