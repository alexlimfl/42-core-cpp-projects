#include <iostream>
#include <ctime>
#include "../include/Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
        Array<int> numbers(MAX_VAL);
        int* mirror = new int[MAX_VAL];
        srand(time(NULL));
        for (int i = 0; i < MAX_VAL; i++)
        {
            const int value = rand();
            numbers[i] = value;
            mirror[i] = value;
        }
        //SCOPE (test copy constructor)
        {
            Array<int> tmp = numbers;
            // tmp.printArr();
            Array<int> test(tmp);
            // test.printArr();
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            if (mirror[i] != numbers[i])
            {
                std::cerr << "didn't save the same value!!" << std::endl;
                return 1;
            }
        }
        try
        {
            numbers[749] = 0;
            std::cout << numbers[749] << "\n";
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            numbers[MAX_VAL] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            numbers[i] = rand();
        }

        // numbers.printArr();
        std::cout << "END OF TEST!\n";

        delete [] mirror;//

    return 0;
}