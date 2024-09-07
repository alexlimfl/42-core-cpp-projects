/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 09:33:55 by folim             #+#    #+#             */
/*   Updated: 2024/08/09 09:33:56 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

int main()
{
    {   
        std::cout << "Test from module:\n";
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }

    {
        std::cout << "Test addNumber() with iterators:\n";
        int arr[] = {6, 3, 17, 9, 11};
        std::vector<int> numbers(arr, arr + sizeof(arr)/sizeof(arr[0]));
        Span sp = Span(5);
        sp.addNumber(numbers.begin(), numbers.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }

    {
        std::cout << "Test with random 10000 numbers:\n";
        int N = 10000;
        std::vector<int> numbers(N, 0);
        std::srand(time(NULL));
        std::generate(numbers.begin(), numbers.end(), rand);
        std::cout << "The size is: " << numbers.size() << "\n";
        // for (size_t i = 0; i < numbers.size(); i++) { 
        //     std::cout << numbers[i] << ", ";
        Span sp(N);
        sp.addNumber(numbers.begin(), numbers.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

        std::cout << "Test exceptions:\n";
        Span test(5);

        try {
            std::cout << test.shortestSpan() << std::endl;
        } catch (std::exception &e){
            std::cout << e.what() << "\n";
        }

        try {
            test.addNumber(numbers.begin(), numbers.end());
        } catch (std::exception &e){
            std::cout << e.what() << "\n";
        }
    }

    {
        std::cout << "Test copy constructor and copy assignment operator:\n";
        Span test(5);
        Span test1(test);
        Span test2(25);

        test2 = test1;
        std::cout << test.getN() << "\n";
        std::cout << test1.getN() << "\n";
        std::cout << test2.getN() << "\n";
    }
    return 0;
}