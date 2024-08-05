/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:25:52 by folim             #+#    #+#             */
/*   Updated: 2024/07/29 11:25:53 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SERIALIZER_H__
    #define __SERIALIZER_H__
#include <iostream>
#include <stdint.h>
#include "Data.hpp"

class Serializer{

    private:
        Serializer();
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
        Serializer(const Serializer &src);
        Serializer &operator=(const Serializer &src);
        ~Serializer();
};

#endif