/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 09:33:55 by folim             #+#    #+#             */
/*   Updated: 2024/08/09 09:33:56 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"


Span::Span(unsigned int nb) : N(nb) {}

Span::Span(const Span &src){
    this->N = src.N;
}

Span &Span::operator=(const Span &src){
    if (this != &src)
        this->N = src.getN();
    return *this;
}

Span::~Span(){}

void Span::addNumber(int nb){
    if (numbers.size() >= N)
        throw std::out_of_range("Max element limit reached");
    numbers.push_back(nb);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    if (std::distance(begin, end) > static_cast<int>(N - numbers.size()))
        throw std::out_of_range("Max element limit reached");
    numbers.insert(numbers.end(), begin, end);
}

int Span::longestSpan(){
    if (numbers.size() < 2)
        throw std::out_of_range("No numbers stored, or only one, or no span can be found");
    return *std::max_element(numbers.begin(), numbers.end()) - *std::min_element(numbers.begin(), numbers.end());
}

int Span::shortestSpan(){
    int shortest_s = longestSpan();
    if (numbers.size() < 2)
        throw std::out_of_range("No numbers stored, or only one, no span can be found");
    for (size_t i = 0; numbers[i]; i++){
        int numA = numbers[i];
        for (size_t j = 0; numbers[j]; j++){
            if (numA - numbers[j] <= 0)
                continue;
            if (shortest_s >= numA - numbers[j])
                shortest_s = numA - numbers[j];
        }
    }
    return shortest_s;
}

unsigned int Span::getN() const{
    return N;
}
