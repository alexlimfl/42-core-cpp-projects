#include <iostream>
#include <string>

std::string get_input(const std::string& prompt) {
    std::string input;
    bool valid = false;
    do {
        std::cout << prompt;
        std::cin >> input;
        if (input.empty()) {
            std::cout << "Invalid input, please retry!" << std::endl;
        } else {
            valid = true;
        }
    } while (!valid);
    return input;
}

int main() {
    std::string userInput = get_input("Please enter something: ");
    std::cout << "You entered: " << userInput << std::endl;
    return 0;
}

