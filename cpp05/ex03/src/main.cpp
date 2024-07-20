/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 18:13:12 by folim             #+#    #+#             */
/*   Updated: 2024/07/12 18:13:13 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/Intern.hpp"


int main(){

    {
        std::cout << "\nTest Intern\n";
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");

        Bureaucrat alex("Alex", 42);
        alex.signForm(*rrf);
        alex.executeForm(*rrf);
        alex.executeForm(*rrf);
        alex.executeForm(*rrf);

        AForm* rrf_nf;
        Intern anotherIntern;
        rrf_nf = anotherIntern.makeForm("jcnsdkjc", "Bender");

        if (rrf_nf){
            alex.signForm(*rrf_nf);
            alex.executeForm(*rrf_nf);
            alex.executeForm(*rrf_nf);
            alex.executeForm(*rrf_nf);
        }
        
        delete rrf;
    }
}