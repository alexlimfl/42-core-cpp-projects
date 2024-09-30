/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 21:19:52 by folim             #+#    #+#             */
/*   Updated: 2024/09/27 21:19:53 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string input,std::string db)
{
    this->_input = input;
    extractDB(db);
    // extractInput(input);
}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src){
    std::cout << "Copy Constructor Called\n";
    this->_input = src._input;
    this->_db_m = src._db_m;
    this->_input_m = src._input_m;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &src){
    std::cout << "Copy Assignment Operator Called\n";
    if (this != &src){
        this->_input = src._input;
        this->_db_m = src._db_m;
        this->_input_m = src._input_m;
    }
    return *this;
}

void BitcoinExchange::extractDB(std::string db){
    std::ifstream file(db.c_str());
    if (!file){
        std::cout << "Error: could not open file.\n";
        exit (1);
    }
    std::string line;
    std::string delimiter = ",";
    getline(file, line);
    while (getline(file, line)){
        int count_delimiter = std::count(line.begin(), line.end(), delimiter[0]);
        if (count_delimiter != 1){
            std::cout << "Error: wrong database format. Check separator.\n";
            file.close();
            exit (1);
        }
        std::string date, exchange_rate;
        date = line.substr(0, line.find(delimiter));
        exchange_rate = line.substr(line.find(delimiter) + 1, line.length());
        // std::cout << "Date: " << date << " EX: " << exchange_rate << "\n";
        time_t t;
        float ex_rate = 0.00;

        if (!(noAlpha(line) && parseDate(date, t) && parseExchangeRate(exchange_rate, ex_rate))){
            file.close();
            exit (1);
        }
        _db_m.insert(std::make_pair(t, ex_rate));
    }
    file.close();
}

bool BitcoinExchange::parseDate(std::string date, time_t &arithmetic_time){
    struct tm tmStruct = {0};

    if ((date[date.length()-2] > 3 + '0' && date[date.length()-1] >= 0 + '0' )
        || date[date.length()-3] != '-'){
            std::cout << "bad input => " << date << "\n";
            return false;
    }
    if (strptime(date.c_str(), "%Y-%m-%d", &tmStruct)){
        arithmetic_time = mktime(&tmStruct);
        if (arithmetic_time == -1){
            std::cout << "bad input => " << date << "\n";
            return false;
        }
        else{
            // std::cout << "GOOD input => " << date << ", " << arithmetic_time << "\n";
            return true;
        }
    }
    else{
        std::cout << "bad input => " << date << "\n";
        return false;
    }
}

bool BitcoinExchange::parseExchangeRate(std::string exchange_rate, float &ex_rate){
    std::stringstream ss(exchange_rate);
    ss >> ex_rate;
    if (ex_rate < 0){
        std::cout << "Error: not a positive number.\n";
        return false;
    }
    if (ex_rate >= 2147483648){
        std::cout << "Error: too large a number.\n";
        return false;
    }
    if (ss.fail() || ss.bad() || ss.peek() != EOF){
        std::cout << "Error: invalid exchange rate/unit.\n";
        return false;
    }
    return true;
}

bool BitcoinExchange::noAlpha(std::string str){
    for (int i = 0; str[i]; i++) 
        if (std::isalpha(str[i])){
            std::cout << "Error: invalid format. Non-digit value found.\n";
            return false;
        }
    return true;
}


void BitcoinExchange::convertInput(){
    std::ifstream file(_input.c_str());
    if (!file){
        std::cout << "Error: could not open file.\n";
        return ;
    }
    std::string line;
    getline(file, line);
    if (line.empty()){
        std::cout << "Error: no content.\n";
        return ;
    }
    while (getline(file, line)){
        if (line.empty())
            continue;
        std::istringstream iss(line);
        std::string date, separator, value;
        time_t dt;
        float value_f = 0;
        if (iss >> date >> separator >> value){
            if (separator == "|"){
                // std::cout << 1 << date << 2 << separator << 3 << value << "\n";
                if (!(parseDate(date, dt) && parseExchangeRate(value, value_f)))
                    continue;
                if (value_f > 1000){
                    std::cout << "Error: too large a number.\n";
                    continue;
                }
            }
            std::map<time_t, float>::iterator iter;
            while (dt >= 0){
                // std::cout << dt << "\n";
                iter = _db_m.find(dt);
                if (iter == _db_m.end())
                    dt -= 86400;
                else
                    break;
            }
            if (dt >= 0)
                std::cout << date << "=> " << value << " = " << iter->second*value_f << "\n";
            else
                std::cout << "Error: no record => " << date << "\n";
        }
        else {
            std::cout << "Error: bad input => " << date << "\n";
        }
    }
    file.close();
}

void BitcoinExchange::printMap(std::map<time_t, float>&map){
    std::map<time_t, float>::iterator iter;
    for (iter = _db_m.begin(); iter != _db_m.end(); ++iter){
        std::cout << std::fixed << std::setprecision(2);
        std::cout << iter->first << " - " << iter->second << std::endl;
    }
}
