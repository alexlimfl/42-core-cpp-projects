/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:25:52 by folim             #+#    #+#             */
/*   Updated: 2024/07/29 11:25:53 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALARCONVERTER_H__
    #define __SCALARCONVERTER_H__
#include <iostream>
#include <sstream>
#include <string>
#include <stdlib.h>

class ScalarConverter{

    private:
        ScalarConverter();
    public:
        static void convert(std::string);
        ScalarConverter(const ScalarConverter &src);
        ScalarConverter &operator=(const ScalarConverter &src);
        ~ScalarConverter();
};

void    printChar(char c);
void    printInt(int i);
void    printFloat(float f, bool hasDeci);
void    printDouble(double d, bool hasDeci);
bool    checkValid(std::string str);

#endif