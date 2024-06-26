/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 22:56:27 by folim             #+#    #+#             */
/*   Updated: 2024/06/26 22:56:29 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_H__
    #define __BRAIN_H__

#include <iostream>

class Brain{
    public:
        std::string ideas[100];
        Brain();
        ~Brain();
        Brain(const Brain &src);
        Brain &operator= (const Brain &src);
};

#endif
