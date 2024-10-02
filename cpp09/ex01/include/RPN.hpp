/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:47:06 by folim             #+#    #+#             */
/*   Updated: 2024/10/02 15:47:09 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __RPN_H__
    #define __RPN_H__

#include <stack>
#include <iostream>
#include <sstream>
#include <string>
#include <stdlib.h>
class RPN
{
    private:
        std::string  _input;
        std::stack<int> _expression;

    public:
        RPN(const std::string input);
        ~RPN();
        RPN(const RPN &src);
        RPN &operator=(const RPN &src);
        void Run();
        bool CheckInput();
        bool InitExpression();
        int Calculation();
        bool isOperator(int input);
};


#endif
