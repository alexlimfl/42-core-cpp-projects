/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:47:36 by folim             #+#    #+#             */
/*   Updated: 2024/10/02 15:47:38 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

RPN::RPN(const std::string input) : _input(input)
{
    Run();
}

RPN::RPN(const RPN &src)
{
    *this = src;
}

RPN &RPN::operator=(const RPN &src)
{
    if (this != &src){
        this->_input = src._input;
        this->_expression = src._expression;
    }
    return *this;
}

RPN::~RPN()
{
}

void RPN::Run()
{
    if (!CheckInput() || !InitExpression())
        return ;
    std::cout << Calculation() << "\n";
}

bool RPN::CheckInput()
{
    std::stringstream iss(_input);
    int count = 0;
    while (iss){
        std::string temp;
        iss >> temp;
        if (temp == "")
            break;
        // std::cout << temp << "\n";
        if (temp.length() != 1
            || ((temp[0] < '0' || temp[0] > '9')
            && temp[0] != '+' && temp[0] != '-'
            && temp[0] != '*' && temp[0] != '/')){
            std::cout << "Error: Invalid input, check expression!\n";
            return false;
            }
        count++;
    }
    if (count == 0){
        std::cout << "Error: No input found!\n";
        return false;
    }
    return true;
}

bool RPN::InitExpression()
{
    std::stringstream iss(_input);
    while (iss){
        std::string temp;
        iss >> temp;
        if (temp == "")
            break;
        _expression.push(temp[0]);
        // std::cout << (int)temp[0]<< "\n";
    }
    // std::cout << (expression.top()) << "\n";
    if (!isOperator(_expression.top())){
        std::cout << "Error: Main operator not found, check expression!\n";
        return false;
    }
    return true;
}

/*
    42 	*
    43 	+
    45 	–
    47 	/

*/

bool RPN::isOperator(int input)
{
    if (input == '+' || input == '-' 
        || input == '*' || input == '/')
        return true;
    return false;
}

/*
    $> ./RPN "1 2 * 2 / 2 * 2 4 - +"
•	+ ( ) ( )
•	+ (- (4) (2)) (* (2) (/ (2) (* (2) (1))))
•	+ (-2) (* (2) (/ (2) (2))
•	+ (-2) (* (2) (1))
•	+ (-2) (2)
•	0
*/

int RPN::Calculation()
{
    int current = _expression.top();
    _expression.pop();
    if (isOperator(current)){
        if (_expression.size() == 0){
            std::cout << "Error: Operator format error, check expression!\n";
            exit(1);
        }
        int left = Calculation();
        int right = Calculation();
        if (current == '+')
            return right + left;
        if (current == '-')
            return right - left;
        if (current == '*')
            return right * left;
        if (current == '/')
            return right / left;
    }
    return current - 48;
}
