/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 00:18:47 by folim             #+#    #+#             */
/*   Updated: 2024/08/07 00:18:48 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WHATEVER_H__
    #define __WHATEVER_H__

#include <iostream>

template <typename T> void swap(T &a, T &b){
    // std::cout << "swapping..\n";
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

template <typename T> const T &min(T &a, T &b){
    return (a < b) ? a : b;
}

template <typename T> const T &max(T &a, T &b){
    return (a > b) ? a : b;
}

#endif
