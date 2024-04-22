#include <iostream>

int main() {
    char c;

    // Read characters until EOF is encountered
    while (!std::cin.eof()) {
        // Read a character
        std::cin.get(c);

        // Check if EOF is reached
        if (std::cin.eof()) {
            std::cout << "EOF reached." << std::endl;
            break;  // Exit the loop when EOF is reached
        }

        // Process the character
        std::cout << "Read character: " << c << std::endl;
    }

    return 0;
}

