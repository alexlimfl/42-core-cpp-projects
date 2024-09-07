/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:25:33 by folim             #+#    #+#             */
/*   Updated: 2024/07/29 11:25:35 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
    std::cout << "Constructor ScalarConvertor\n";
}

ScalarConverter::ScalarConverter(const ScalarConverter &src){
    (void)src;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &src){
    (void)src;
    return *this;
}   

ScalarConverter::~ScalarConverter(){
    std::cout << "Destructor ScalarConvertor\n";
}

void ScalarConverter::convert(std::string str){
    if(str == "nan" || str == "-inf" || str ==  "+inf" || str == "inf"
        || str == "-inff" || str == "+inff" || str == "nanf" || str == "inff")
    {
        std::cout   <<  "char: impossible\nint: impossible\n";
        (str == "nan" || str == "-inf" || str == "+inf" || str == "inf")
            ? std::cout<<  "float: " << str + "f" : std::cout<<  "float: " << str;
        (str == "nanf" || str == "-inff" || str == "+inff" || str == "inff" || str == "inff")
            ? std::cout << "\ndouble: " << str.substr(0, str.length() - 1) : std::cout << "\ndouble: " << str;
        std::cout << "\n";
        return;
    }
    else if (!checkValid(str)){
        std::cout << "Invalid input!\n";
        return;
    }

    float cDeci = std::atof(str.c_str());
    bool hasDeci = ((int)cDeci != cDeci);

    // convert char
    if (str.length() == 1 && !isdigit(str[0])){
        char c = str[0];
        printChar(c);
        printInt(static_cast<int>(c));
        printFloat(static_cast<float>(c), hasDeci);
        printDouble(static_cast<double>(c), hasDeci);
        return;
    }

    // convert int
        int i = std::atoi(str.c_str());
        printChar(static_cast<char>(i));
        printInt(i);

    // convert float
    float f = std::atof(str.c_str());
    printFloat(f, hasDeci);

    std::stringstream ss(str);
    double d;
    ss >> d;
    printDouble(d, hasDeci);

    return;
}

void    printChar(char c){
    if (isprint(c))
        std::cout << "char: '" << c << "'\n";
    else
        std::cout << "char: Non displayable\n";
}

void    printInt(int i){
    std::cout << "int: " << i << "\n";
}

void    printFloat(float f, bool hasDeci){
    std::cout << "float: " << f;
    if (!hasDeci)
        std::cout << ".0";
    std::cout << "f" << "\n";
}

void    printDouble(double d, bool hasDeci){
    std::cout << "double: " << d;
    if (!hasDeci)
        std::cout << ".0";
    std::cout << "\n";
}

bool    checkValid(std::string str){

    int cPrintable = 0; // excluding number characters
    int cDot = 0;
    int c = 0;
    if (str[c] == '+' || str[c] == '-' || std::isprint(str[c]))
        c++;
    while (str[c]){
        // std::cout << str[c] << '\n';
        if (std::isprint(str[c]) && !std::isdigit(str[c]) && str[c] != '.')
            cPrintable++;
        if (str[c] == '.')
            cDot++;
        c++;
    }
    if (str[c - 1] == 'f')
        cPrintable--;
    // std::cout << cPrintable << "\n" << cDot << "\n";
    if (cPrintable > 0 || cDot > 1)
        return false;
    return true;
}
