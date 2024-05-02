/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 20:59:02 by folim             #+#    #+#             */
/*   Updated: 2024/05/02 20:59:03 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Sed.hpp"

void Sed::replace(const std::string s1, const std::string s2){
    std::string current_line;
    while (std::getline(_inputFile, current_line)){
        std::size_t f_index;
        std::string newline;
        while ((f_index = current_line.find(s1)) != std::string::npos){
            newline += current_line.substr(0, f_index);
            newline += s2;
            f_index += s1.length();
            current_line = current_line.substr(f_index);
            f_index = 0;
        }
        newline += current_line;
        _outputFile << newline;
    }
}

Sed::Sed(const std::string filename) : _filename(filename){
    _inputFile.open((filename.c_str()));
    if (!_inputFile.is_open()){
        std::cerr << "Error: Unable to open input file!" << std::endl;
        return ;
    }
    _outputFile.open((filename + ".replace").c_str());
    if (!_outputFile.is_open()){
        std::cerr << "Error: Unable to create output file!" << std::endl;
        return ;
    }
    std::cout << "Output file: " << filename + ".replace" << " is created/updated!"
                << std::endl;
}
 
Sed::~Sed(){
    _inputFile.close();
    _outputFile.close();
}
