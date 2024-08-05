#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <limits>
#include <cmath>

class ScalarConverter {
public:
    static void convert(const std::string& literal);

private:
    ScalarConverter(); // Private constructor to prevent instantiation

    static void printChar(char c);
    static void printInt(int i);
    static void printFloat(float f);
    static void printDouble(double d);
};

#endif // SCALARCONVERTER_HPP
