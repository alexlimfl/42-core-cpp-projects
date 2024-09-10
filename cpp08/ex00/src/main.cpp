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

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    std::vector<int> vec(arr, arr + sizeof(arr)/sizeof(arr[0]));
    std::list<int> list(arr, arr + sizeof(arr)/sizeof(arr[0]));
    std::deque<int> deque(arr, arr + sizeof(arr)/sizeof(arr[0]));

    std::cout << "\nTesting vector container:\n";
    easyfind(vec, -1);
    easyfind(vec, 0);
    easyfind(vec, 5);

    std::cout << "\nTesting list container:\n";
    easyfind(list, -1);
    easyfind(list, 0);
    easyfind(list, 5);

    std::cout << "\nTesting deque container:\n";
    easyfind(deque, -1);
    easyfind(deque, 0);
    easyfind(deque, 5);

    return 0;
}
