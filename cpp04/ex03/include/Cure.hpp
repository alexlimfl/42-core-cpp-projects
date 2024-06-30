/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 22:13:56 by folim             #+#    #+#             */
/*   Updated: 2024/06/28 22:13:57 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __CURE_H__
    #define __CURE_H__

#include "AMateria.hpp"

class Cure : public AMateria{
    public:
        Cure();

        virtual void ~Cure = 0;

};

#endif