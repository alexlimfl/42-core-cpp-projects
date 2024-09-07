/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 09:33:55 by folim             #+#    #+#             */
/*   Updated: 2024/08/09 09:33:56 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>
#include <algorithm>
#include <random>

class Span {
    private:
        unsigned int N;
        std::vector<int> numbers;
    public:
        Span(unsigned int nb);
        Span(const Span &src);
        Span &operator=(const Span &src);
        ~Span();
        void            addNumber(int nb);
        void            addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int             shortestSpan();
        int             longestSpan();
        unsigned int    getN() const;
};