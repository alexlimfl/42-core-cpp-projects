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
    std::cout << "Contructor [Bureaucrat, " << _name << ", " << _grade << "]\n";
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Destructor [Bureaucrat, " << _name << "]\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name){
    this->_grade = src.getGrade();
    std::cout << "Copy Contructor [Bureaucrat, " << _name << ", " << _grade << "]\n";
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &src){
    if (this->_grade != src.getGrade())
        this->_grade = src.getGrade();
    std::cout << "Copy Assignment Operator [Bureaucrat, " << _name << ", " << _grade << "]\n";
    return *this;
}

std::string const Bureaucrat::getName() const {
    return this->_name;
}

size_t Bureaucrat::getGrade() const {
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
    try{
        if (_grade - 1 < 1)
            throw Bureaucrat::GradeTooHighException();
        else
            this->_grade -= 1;
    }
    catch (Bureaucrat::GradeTooHighException & e){
        std::cerr << e.what() << "\n";
    }
}

void Bureaucrat::decrementGrade(){

    try{
        if (_grade + 1 > 150)
            throw Bureaucrat::GradeTooLowException();
        else
            this->_grade += 1;
    }
    catch (Bureaucrat::GradeTooLowException & e){
        std::cerr << e.what() << "\n";
    }
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return "Grade too high!\n";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return "Grade too low!\n";
}

std::ostream    &operator<<(std::ostream &o, Bureaucrat &obj){
    o << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".\n";
    return o;
}
