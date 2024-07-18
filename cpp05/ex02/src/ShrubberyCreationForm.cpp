/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 23:17:33 by folim             #+#    #+#             */
/*   Updated: 2024/07/17 23:17:34 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): 
    AForm("Shubbery Creation Form", 145, 137){
    this->_target = target;
    std::cout << "Constructor [ShrubberyCreationForm, " << this->_target << "]\n";
    std::cout << *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "Destructor [ShrubberyCreationForm, " << "]\n"
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    std::ofstream   ofs(this->target + "_shrubbery");
    ofs.is_open(){
        ofs << 
        "                                                    \n     .
                                              .         ;  \n
                 .              .              ;%     ;;   \n
                   ,           ,                :;%  %;   \n
                    :         ;                   :;%;'     .,\n   
           ,.        %;     %;            ;        %;'    ,;\n
             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n
              %;       %;%;      ,  ;       %;  ;%;   ,%;'\n 
               ;%;      %;        ;%;        % ;%;  ,%;'\n
                `%;.     ;%;     %;'         `;%%;.%;'\n
                 `:;%.    ;%%. %@;        %; ;@%;%'\n
                    `:%;.  :;bd%;          %;@%;'\n
                      `@%:.  :;%.         ;@@%;'   \n
                        `@%.  `;@%.      ;@@%;    \n     
                          `@%%. `@%%    ;@@%;   \n     
                            ;@%. :@%%  %@@%;  \n     
                              %@bd%%%bd%%:; \n    
                                #@%%%%%:;;\n
                                %@@%%%::;\n
                                %@@@%(o);  . '        \n 
                                %@@@o%;:(.,'        \n 
                            `.. %@@@o%::;         \n
                               `)@@@o%::;         \n
                                %@@(o)::;        \n
                               .%@@@@%::;       \n  
                               ;%@@@@%::;.    \n      
                              ;%@@@@%%:;;;. \n
                          ...;%@@@@@%%:;;;;,..\n";
    }
}


std::ostream    &operator<<(std::ostream &o, ShrubberyCreationForm &obj){
    std::string status = "Not signed";
    if (obj.getSign())
        status = "Signed";
    o << "ShrubberyCreationForm: " << obj.getName() << ", Status: " << status << ".\n"
        << "Grade required to sign: " << obj.getSignGrade() << ".\n"
        << "Grade required to execute: " << obj.getExeGrade() << ".\n";
    return o;
}