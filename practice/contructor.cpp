#include <iostream>
#include <string>

class Contact {
public:
    std::string firstName;
    std::string lastName;
    std::string nickname;

    // Constructor declaration
    Contact(const std::string& first, const std::string& last, const std::string& nick)
        : firstName(first), lastName(last), nickname(nick) {}
};

// Constructor definition
// Contact::Contact(const std::string& first, const std::string& last, const std::string& nick)

int main() {
    // Creating a Contact object
    Contact myContact("John", "Doe", "JD");

    // Printing the details of the contact
    std::cout << "First Name: " << myContact.firstName << std::endl;
    std::cout << "Last Name: " << myContact.lastName << std::endl;
    std::cout << "Nickname: " << myContact.nickname << std::endl;

    return 0;
}
