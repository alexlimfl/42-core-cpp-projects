/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 00:18:47 by folim             #+#    #+#             */
/*   Updated: 2024/08/07 00:18:48 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_H__
    #define __ITER_H__

#include <iostream>

template <typename T> void Fun(T &a){
    a += '0';
    std::cout << a << "\n";
}

template <typename T> void iter(T *arr, size_t len, void(*f)(T&)){
    for (size_t i = 0; i < len; i++){
        f(arr[i]);
    }
}

#endif
