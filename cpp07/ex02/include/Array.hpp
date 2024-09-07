/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 00:18:47 by folim             #+#    #+#             */
/*   Updated: 2024/08/07 00:18:48 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_H__
    #define __ARRAY_H__

#include <iostream>
#include <cstdlib>

template <class T> class Array {
    private:
        T               *_arr;
        unsigned int    _size;
    public:
        Array(){
            std::cout << "Creating empty array\n";
            this->_size = 0;
            this->_arr = NULL;
        }

        Array(unsigned int n){
            std::cout << "Creating array with size of " << n << " element(s)\n";
            this->_size = n;
            this->_arr = new T[n];
        }

        Array(const Array &src){
            std::cout << "Copy constructor called\n";
            this->_size = src.size();
            this->_arr = new T[this->_size];
            for (unsigned int i = 0; i <  this->_size; i++)
                this->_arr[i] = src._arr[i];
        }

        Array   &operator=(const Array &src){
            std::cout << "Copy Assignment Operator called\n";            
            if (this != &src){
                delete[] this->_arr;
                this->_size = src->size();
                this->_arr = new T[this->_size];
                for (unsigned int i = 0; i <  this->_size; i++)
                    this->_arr[i] = src._arr[i];
            }
            return *this;
        }

        ~Array(){
            std::cout << "Destructor called\n";
            delete[] this->_arr;
        }

        T   &operator[](unsigned int index){
            if (index >= _size){
                throw OutOfBoundException();
            }
            return this->_arr[index];
        }

        unsigned int    size() const{
            return this->_size;
        }

        class OutOfBoundException : public std::exception{
            public:
                const char *what() const throw(){
                    return "---Index is out of bounds!---";
                }
        };

        void printArr(){
            for (unsigned int i = 0; i < this->_size; i++){
                std::cout << this->_arr[i] << " ";
            }
            std::cout << "\n";
        }
};

#endif