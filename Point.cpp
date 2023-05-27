#include "Point.h"
double Point::get_x()
{
    return x;
}

double Point::get_y()
{
    return y;
}

double Point::get_z()
{
    return z;
}

void Point::set_x(double px)
{
    x = px;
}

void Point::set_y(double py)
{
    y = py;
}

void Point::set_z(double pz)
{
    z = pz;
}

bool Point::writeToFile()
{
    FILE* file;
    fopen_s(&file, "data.txt", "wb");
    if (file != nullptr) {
        fprintf(file, "X:%.2f\t\t", x);
        fprintf(file, "Y:%.2f\t\t", y);
        fprintf(file, "Z:%.2f\t\t", z);
        return true;
    }
    else
    {
        return false;
    }

    fclose(file);
}

bool Point::readFromFile(const char* FILENAME)
{
    FILE* file;
    fopen_s(&file, FILENAME, "rb");
    if (file != nullptr)
    {
        double X, Y, Z;
        if (fscanf_s(file, "%lf %lf %lf", &X, &Y, &Z) == EOF)
        {
            x = X;
            y = Y;
            z = Z;
            fclose(file);

            fopen_s(&file, FILENAME, "wb");
            if (file != nullptr)
            {
                fprintf_s(file, "%lf %lf %lf", x, y, z);
                fclose(file);
                return true;
            }
        }
        fclose(file);
    }
    return false;
}