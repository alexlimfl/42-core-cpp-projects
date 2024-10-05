/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:11:46 by folim             #+#    #+#             */
/*   Updated: 2024/10/04 14:11:48 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PMERGEME_HPP__
    #define __PMERGEME_HPP__

#include <iostream>
#include <list>
#include <vector>
#include <sstream>
#include <cstring>
#include <cstdio>
#include <ctime>



class PmergeMe
{
    private:
        char **_input;
        std::list<int> _list;
        std::vector<int> _vector;
        bool _isListSorted;
        bool _isVectorSorted;

    public:
        PmergeMe(char **input);
        PmergeMe(const PmergeMe &src);
        PmergeMe &operator=(const PmergeMe &src);
        ~PmergeMe();

        void Run();
        bool Parse();
        bool checkDuplicate();
        bool isSortedList();
        bool isSortedVector();
        std::list<int> sortList(std::list<int> n);
        std::list<int> mergeList(std::list<int>a, std::list<int>b);
        std::vector<int> sortVector(std::vector<int> n);
        std::vector<int> mergeVector(std::vector<int>a, std::vector<int>b);
};

template <typename Container>
void printContainer(Container &container){
    for (typename Container::iterator it = container.begin(); it != container.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << "\n";
}

#endif
