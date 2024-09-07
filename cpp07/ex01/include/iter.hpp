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
    a += 42;
    std::cout << a << "\n";
}

template <typename T> void iter(T *arr, size_t len, void(*f)(T&)){
    for (size_t i = 0; i < len; i++){
        f(arr[i]);
    }
}

// template <typename T, typename U, typename V> void iter(T *arr, U *arr1, V *arr2, size_t len){
//     for (size_t i = 0; i < len; i++){
//         Fun(arr[i]);
//         Fun(arr1[i]);
//         Fun(arr2[i]);
//     }
// }

#endif
