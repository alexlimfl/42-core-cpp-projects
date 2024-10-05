/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:12:17 by folim             #+#    #+#             */
/*   Updated: 2024/10/04 14:12:18 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

PmergeMe::PmergeMe(char **input) : _input(input)
{
    Run();
}

PmergeMe::PmergeMe(const PmergeMe &src)
{
    *this = src;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &src)
{
    if (this != &src){
        this->_input = src._input;
    }
    return *this;
}

PmergeMe::~PmergeMe()
{
}

void PmergeMe::Run()
{
    if (!checkDuplicate() || !Parse())
        return ;

    std::cout << "Before: ";
    printContainer(_list);

    clock_t time_list = clock();
    _list = sortList(_list);
    time_list = (clock() - time_list) * 1000000 / CLOCKS_PER_SEC;

    clock_t time_vector = clock();
    _vector = sortVector(_vector);
    time_vector = (clock() - time_vector) * 1000000 / CLOCKS_PER_SEC;

    if (!isSortedList() || !isSortedVector())
        return ;

    std::cout << "After: ";
    printContainer(_list);
    std::cout << "Time to process a range of " << _list.size() << " with std::list : " << time_list << " us\n";
    std::cout << "Time to process a range of " << _vector.size() << " with std::vector : " << time_vector << " us\n";
}

bool PmergeMe::Parse(){
    for (size_t i = 0; _input[i]; i++){
        std::stringstream iss(_input[i]);
        int num = 0;
        iss >> num;
        if (num < 0){
            std::cout << "Error: Negative integer found. Only positive integer accepted\n";
            return false;
        }
        _list.push_back(num);
        _vector.push_back(num);
        if (iss.fail() || iss.bad() || iss.peek() != EOF){
            std::cout << "Error: Non integer found. Only interger accepted\n";
            return false;
        }
    }
    return true;
}

bool PmergeMe::checkDuplicate(){
    if (!_input){
        std::cout << "Error: No input found\n";
        return false;
    }
    for (size_t i = 0; _input[i]; i++){
        for (size_t j = i + 1; _input[j]; j++){
            if (strcmp(_input[i], _input[j]) == 0){
                std::cout << "Error: Duplicate found\n";
                return false;
            }
        }
    }
    return true;
}

std::list<int> PmergeMe::sortList(std::list<int> n){
    if (n.size() <= 1)
        return n;
    size_t half = n.size() / 2;
    std::list<int>a;
    std::list<int>b;
    while (n.size() > half){
        a.push_back(n.front());
        n.pop_front();
    }
    while (n.size() > 0){
        b.push_back(n.front());
        n.pop_front();
    }
    a = sortList(a);
    b = sortList(b);

    return mergeList(a, b);
}

std::list<int> PmergeMe::mergeList(std::list<int>a, std::list<int>b){
    std::list<int>c;
    while (a.size() > 0 && b.size() > 0){
        if (a.front() > b.front()){
            c.push_back(b.front());
            b.pop_front();
        }
        else{
            c.push_back(a.front());
            a.pop_front();
        }
    }
    while (a.size() > 0){
        c.push_back(a.front());
        a.pop_front();
    }
    while (b.size() > 0){
        c.push_back(b.front());
        b.pop_front();
    }
    return c;
}

std::vector<int> PmergeMe::sortVector(std::vector<int> n){
    if (n.size() <= 1)
        return n;
    size_t half = n.size() / 2;
    std::vector<int>a;
    std::vector<int>b;
    while (n.size() > half){
        a.push_back(n.front());
        n.erase(n.begin());
    }
    while (n.size() > 0){
        b.push_back(n.front());
        n.erase(n.begin());
    }
    a = sortVector(a);
    b = sortVector(b);

    return mergeVector(a, b);
}

std::vector<int> PmergeMe::mergeVector(std::vector<int>a, std::vector<int>b){
    std::vector<int>c;
    while (a.size() > 0 && b.size() > 0){
        if (a.front() > b.front()){
            c.push_back(b.front());
            b.erase(b.begin());
        }
        else{
            c.push_back(a.front());
            a.erase(a.begin());
        }
    }
    while (a.size() > 0){
        c.push_back(a.front());
        a.erase(a.begin());
    }
    while (b.size() > 0){
        c.push_back(b.front());
        b.erase(b.begin());
    }
    return c;
}

bool PmergeMe::isSortedList(){
    std::list<int>::iterator ite = _list.end();
    for (std::list<int>::iterator it = _list.begin(); it != ite; it++){
        std::list<int>::iterator it2 = it;
        it2++;
        if (it2 == ite)
            break;
        if (*it > *it2){
            std::cout << "Error: List is not sorted\n";
            return false;
        }
    }
    return true;
}

bool PmergeMe::isSortedVector(){
    std::vector<int>::iterator ite = _vector.end();
    for (std::vector<int>::iterator it = _vector.begin(); it != ite; it++){
        std::vector<int>::iterator it2 = it;
        it2++;
        if (it2 == ite)
            break;
        if (*it > *it2){
            std::cout << "Error: Vector is not sorted\n";
            return false;
        }
    }
    // std::cout << "Vector is sorted\n";
    return true;
}
