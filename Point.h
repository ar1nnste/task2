#pragma once
#include <iostream>
class Point
{
private:
	double x;
	double y;
	double z;
public:
	double get_x();
	double get_y();
	double get_z();

	void set_x(double px);
	void set_y(double py);
	void set_z(double pz);

	bool writeToFile();
	bool readFromFile(const char* FILENAME);
};