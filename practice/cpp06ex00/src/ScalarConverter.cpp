#include "../include/ScalarConverter.hpp"

void ScalarConverter::convert(const std::string& literal) {
    try {
        // Try to convert to char
        if (literal.length() == 1 && !isdigit(literal[0])) {
            char c = literal[0];
            printChar(c);
            printInt(static_cast<int>(c));
            printFloat(static_cast<float>(c));
            printDouble(static_cast<double>(c));
            return;
        }

        // Try to convert to int
        int i = std::stoi(literal);
        printChar(static_cast<char>(i));
        printInt(i);
        printFloat(static_cast<float>(i));
        printDouble(static_cast<double>(i));
        return;
    } catch (...) {}

    try {
        // Try to convert to float
        float f = std::stof(literal);
        if (literal == "nanf" || literal == "+inff" || literal == "-inff") {
            printChar(' ');
            printInt(0);
        } else {
            printChar(static_cast<char>(f));
            printInt(static_cast<int>(f));
        }
        printFloat(f);
        printDouble(static_cast<double>(f));
        return;
    } catch (...) {}

    try {
        // Try to convert to double
        double d = std::stod(literal);
        if (literal == "nan" || literal == "+inf" || literal == "-inf") {
            printChar(' ');
            printInt(0);
        } else {
            printChar(static_cast<char>(d));
            printInt(static_cast<int>(d));
        }
        printFloat(static_cast<float>(d));
        printDouble(d);
        return;
    } catch (...) {
        std::cerr << "Conversion failed." << std::endl;
    }
}

void ScalarConverter::printChar(char c) {
    if (isprint(c))
        std::cout << "char: '" << c << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
}

void ScalarConverter::printInt(int i) {
    std::cout << "int: " << i << std::endl;
}

void ScalarConverter::printFloat(float f) {
    std::cout << "float: " << f << "f" << std::endl;
}

void ScalarConverter::printDouble(double d) {
    std::cout << "double: " << d << std::endl;
}
