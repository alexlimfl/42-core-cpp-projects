/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 20:58:07 by folim             #+#    #+#             */
/*   Updated: 2024/05/02 20:58:09 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SED_H__
#define __SED_H__

#include <iostream>
#include <fstream>
#include <string>

class Sed
{
    private:
        std::string     _filename;
        std::ifstream   _inputFile;
        std::ofstream   _outputFile;
    public:
        void    replace(const std::string s1, const std::string s2);
        Sed(const std::string filename);
        ~Sed(void);
};

#endif
