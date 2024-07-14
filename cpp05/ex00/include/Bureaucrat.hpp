/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 18:14:29 by folim             #+#    #+#             */
/*   Updated: 2024/07/12 18:14:31 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_H__
    #define __BUREAUCRAT_H__

#include <iostream>
#include <exception>

class Bureaucrat{
    private:
        std::string const   _name;
        size_t              _grade;
    public:
        Bureaucrat(std::string name, size_t grade);
        Bureaucrat(const Bureaucrat &src);
        Bureaucrat &operator=(const Bureaucrat &src);
        ~Bureaucrat();
        std::string const     getName() const;
        size_t          getGrade() const;
        void            setGrade(size_t grade);
        void            incrementGrade();
        void            decrementGrade();

        class GradeTooHighException : public std::exception{
            public:
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception{
            public:
                const char *what() const throw();
        };
};

std::ostream    &operator<<(std::ostream &o, Bureaucrat const &obj);

#endif
