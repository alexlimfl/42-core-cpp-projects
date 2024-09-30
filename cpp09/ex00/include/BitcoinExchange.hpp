/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 21:19:34 by folim             #+#    #+#             */
/*   Updated: 2024/09/27 21:19:35 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <map>
#include <ctime>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <algorithm>
#include <iomanip>

class BitcoinExchange
{
    private:
        std::string _input;
        std::map <std::string, std::string> _input_m;
        std::map <time_t, float> _db_m;
    public:
        BitcoinExchange(std::string input, std::string db);
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &src);
        BitcoinExchange &operator=(const BitcoinExchange &src);
        void printMap(std::map<time_t, float>&map);
        void extractDB(std::string db);
        void convertInput();
        bool noAlpha(std::string str);
        bool parseDate(std::string date, time_t &arithmetic_time);
        bool parseExchangeRate(std::string exchange_rate, float &ex_rate);

};
