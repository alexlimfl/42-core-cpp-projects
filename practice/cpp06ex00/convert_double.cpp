#include <iostream>
#include <sstream>
#include <string>
#include <cctype>

int main() {
    std::string str = "1.123456789";
    std::stringstream ss(str);
    double value = 0.0;

    ss >> value;

    if (!ss.fail()) {
        std::cout << "Converted value: " << value << std::endl;
    } else {
        std::cout << "Conversion failed!" << std::endl;
    }

    return 0;
}

