/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 18:14:51 by folim             #+#    #+#             */
/*   Updated: 2024/07/12 18:14:53 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, size_t grade): _name(name){
    setGrade(grade);
    std::cout << "Contructor [Bureaucrat, " << _name << "]\n";
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Destructor [Bureaucrat, " << _name << "]\n";
}

std::string Bureaucrat::getName(){
    return this->_name;
}

size_t Bureaucrat::getGrade(){
    return this->_grade;
}

void Bureaucrat::setGrade(size_t grade){
    if (grade < 1)
        throw Bureaucrat::GradeTooLowException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade = grade;
}

void Bureaucrat::incrementGrade(){
    if (_grade + 1 > 150)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade += 1;
}

void Bureaucrat::decrementGrade(){
    if (_grade - 1 < 1)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade -= 1;
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return "Grade too high!\n";
};

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return "Grade too low!\n";
};
