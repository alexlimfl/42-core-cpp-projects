/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 21:15:01 by folim             #+#    #+#             */
/*   Updated: 2024/07/15 21:15:03 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"

Form::Form(std::string name, int GradeSign, int GradeExe): _name(name){
    this->GradeSign = GradeSign;
    this->GradeExe = GradeExe;
    std::cout << "Constructor [Form, " << this->_name << "]\n";
    std::cout << "Grade required to sign: " << this->_GradeSign << "\n";
    std::cout << "Grade required to execute: " << this->_GradeExe << "\n";
}

Form::~Form(){
    std::cout << "Destructor [Form, " << this->_name << "]\n";
}

Form::Form(const Bureaucrat &src) : _name(src._name + "_copy"){
    this->_GradeSign = src.getGradeSign();
    this->_GradeExe = src.getGradeExe();
    std::cout << "Copy Contructor [Bureaucrat, " << _name << ", " << _grade << "]\n";
}

Form & Form::operator=(const Form &src){
    if (this->_grade != src.getGrade())
        this->_grade = src.getGrade();
    std::cout << "Copy Assignment Operator [Bureaucrat, " << _name << ", " << _grade << "]\n";
    return *this;
}

const std::string   Form::getName() const{
    return this->_name;
}

bool    Form::getisSign() const{
    return this->_isSigned;
}

int     Form::getGradeSign() const{
    return this->_GradeSign;
}

int     Form::getGradeExe() const{
    return this->_GradeExe;
}

void    Form::beSigned(const Bureaucrat &obj) const{
    std::cout << "Form " << this->getName() << "is being signed!\n"
    if (this->_GradeSign >= obj.getGrade()){
        if (this->_isSigned)
            std::cout << "The form is already signed by other!\n";
        else{
            this->_isSigned == True;
            std::cout << "The form has been signed by " << obj.getName() << "!\n";
        }
    }
    else{
        throw (Bureaucrat::GradeTooLowException());
    }
}

std::ostream    &operator<<(std::ostream &o, Form &obj){
    o << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".\n";
    return o;
}