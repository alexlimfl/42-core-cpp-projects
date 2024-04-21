#include <iostream>
#include <string>


using namespace std;

int main() {
    string input;
    bool valid = false;
    do {
        cout << "Enter something: ";
        getline(std::cin, input);
        if (input.empty()) {
            cout << "Error: Input cannot be empty. Please try again." << endl;
        } else {
            valid = true;
        }
    } while (!valid);
    cout << "You entered: " << input << endl;
    return 0;
}

