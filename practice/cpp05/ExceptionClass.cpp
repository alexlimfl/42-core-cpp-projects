#include <iostream>
#include <exception>
#include <stdexcept>

class MyException : public std::exception {
public:
    const char* what() const noexcept override{ // Use noexcept here
        return "My custom exception occurred";
    }
};

void myFunction() {
    throw MyException();
}

int main() {
    try {
        myFunction();
    } catch (const MyException& e) {
        std::cerr << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Standard exception: " << e.what() << std::endl;
    }
    return 0;
}
