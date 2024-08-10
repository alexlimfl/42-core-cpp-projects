/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 09:34:19 by folim             #+#    #+#             */
/*   Updated: 2024/08/09 09:34:23 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/easyfind.hpp"
#include <bits/stdc++.h>

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    std::vector<int> vec(arr, arr + sizeof(arr)/sizeof(arr[0]));
    std::list<int> list(arr, arr + sizeof(arr)/sizeof(arr[0]));

    easyfind(vec, -1);
    easyfind(vec, 0);
    easyfind(vec, 5);
    easyfind(list, -11);
    easyfind(list, 11);
    easyfind(list, 5);
    return 0;
}
