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

Form::Form(std::string name, int GradeSign, int GradeExe):
    _name(name), _GradeSign(GradeSign), _GradeExe(GradeExe) {
    this->_isSigned = false;
    std::cout << "Constructor [Form, " << this->_name << "]\n";
    std::cout << *this;
    if (GradeSign < 1 || GradeExe < 1)
        throw Bureaucrat::GradeTooHighException();
    if (GradeSign > 150 || GradeExe > 150)
        throw Bureaucrat::GradeTooLowException();
}

Form::~Form(){
    std::cout << "Destructor [Form, " << this->_name << "]\n";
}

Form::Form(const Form &src):
    _name(src.getName() + "_copy"), _GradeSign(src.getGradeSign()), _GradeExe(src.getGradeExe()) {
    this->_isSigned = src.getSign();
    std::cout << "Copy Constructor [Form, " << this->_name << ", copied from "<< src.getName() << "]\n";
    std::cout << *this;
}

//fix this thing
Form & Form::operator=(const Form &src){
    if (this->_isSigned != src.getSign())
        this->_isSigned = src.getSign();
    std::cout << "Copy Assignment Operator [Form, " << this->_name << ", copied from "<< src.getName() << "]\n";
    std::cout << *this;
    // std::cout << "Grade required to sign: " << this->_GradeSign << "\n";
    // std::cout << "Grade required to execute: " << this->_GradeExe << "\n";
    return *this;
}

const std::string   Form::getName() const{
    return this->_name;
}

bool    Form::getSign() const{
    return this->_isSigned;
}

void    Form::setSign(){
    this->_isSigned = true;
}

size_t  Form::getGradeSign() const{
    return this->_GradeSign;
}

size_t  Form::getGradeExe() const{
    return this->_GradeExe;
}

void    Form::beSigned(Bureaucrat &bureaucrat) {
    std::cout << "Form " << this->getName() << " is being reviewed by " << bureaucrat.getName() << "..\n";
    if (this->_GradeSign >= bureaucrat.getGrade()){
        if (this->_isSigned)
            std::cout << "The form is already signed by other!\n";
        else{
            this->_isSigned = true;
            std::cout << "The form has been signed by " << bureaucrat.getName() << "!\n";
        }
    }
    else{
        throw (Bureaucrat::GradeTooLowException());
    }
}

std::ostream    &operator<<(std::ostream &o, Form &obj){
    std::string status = "Not signed";
    if (obj.getSign())
        std::string status = "Signed";
    o << "Form: " << obj.getName() << ", Status: " << status << ".\n"
        << "Grade required to sign: " << obj.getGradeSign() << ".\n"
        << "Grade required to execute: " << obj.getGradeExe() << ".\n";
    return o;
}