/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 01:19:46 by folim             #+#    #+#             */
/*   Updated: 2024/08/07 01:19:48 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/iter.hpp"

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    iter(arr, sizeof(arr)/sizeof(arr[0]), Fun);

    double arr1[] = {1.5, 2.4, 3.3, 4.2, 5.1};
    iter(arr1, sizeof(arr)/sizeof(arr[0]), Fun);

    std::string arr2[] = {"Alex", "John", "Leon", "Joseph", "Hatsune"};
    iter(arr2, sizeof(arr)/sizeof(arr[0]), Fun);

    iter(arr, arr1, arr2, sizeof(arr)/sizeof(arr[0]));
}