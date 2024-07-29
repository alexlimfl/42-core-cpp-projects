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

class ScalarConverter{
    private:
        static int value;
    public:
        static void convert(std::string str);
};

#endif