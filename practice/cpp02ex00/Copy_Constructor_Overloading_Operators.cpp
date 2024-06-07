/*
    In this example, both the copy constructor and
    the copy assignment operator are defined to perform deep copies, ensuring that each object manages its own copy of the data
*/


#include <iostream>
#include <cstring>

class MyClass {
private:
    char* data;

public:
    // Constructor
    MyClass(const char* value) {
        data = new char[strlen(value) + 1];
        strcpy(data, value);
    }

    // Copy Constructor for Deep Copy
    MyClass(const MyClass& other) {
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
    }

    // Copy Assignment Operator for Deep Copy
    MyClass& operator=(const MyClass& other) {
        if (this != &other) {
            delete[] data;
            data = new char[strlen(other.data) + 1];
            strcpy(data, other.data);
        }
        return *this;
    }

    // Destructor
    ~MyClass() {
        delete[] data;
    }

    // Print method
    void print() {
        std::cout << data << std::endl;
    }
};

int main() {
    MyClass obj1("Hello");
    MyClass obj2 = obj1; // Copy Constructor
    MyClass obj3("World");
    obj3 = obj1; // Copy Assignment Operator

    obj1.print(); // Hello
    obj2.print(); // Hello
    obj3.print(); // Hello

    return 0;
}
