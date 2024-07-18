/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:52:56 by folim             #+#    #+#             */
/*   Updated: 2024/07/17 21:53:00 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATIONFORM_H__
    #define __SHRUBBERYCREATIONFORM_H__

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm{
    private:
        std::string _target;
    public:
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        std::string getTarget();
        void execute(Bureaucrat const & executor) const;
}

#endif
