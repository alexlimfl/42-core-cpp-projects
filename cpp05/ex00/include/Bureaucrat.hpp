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

#ifdef __BUREAUCRAT_H__
    #define __BUREAUCRAT_H__

#include <iostream>

class Bureaucrat{
    private:
        std::string const   _name;
        size_t              _grade;
    public:
        Bureaucrat(std::string name, size_t grade);


        ~Bureaucrat;
        std::string     getName();
        void            setName(std::string name);
        size_t          getGrade();
        void            setGrade();
        void            incrementGrade();
        void            decrementGrade();

        class GradeTooHighException : public std::exception{
            public:
                const char *what const noexcept;
        };
        class GradeTooLowException : public std::exception{
            public:
                const char *what const noexcept;
        };
};

#endif
