#include <iostream>

class Counter {
public:
    // Constructor
    Counter() {
        count = 0; // Initialize count to 0 when object is created
        std::cout << "Constructor called. Count is initialized to 0." << std::endl;
    }

    // Destructor
    ~Counter() {
        std::cout << "Destructor called. Final count is: " << count << std::endl;
    }

    // Function to increment count
    void increment() {
        count++;
    }

    // Function to get count
    int getCount() {
        return count;
    }

private:
    int count; // Member variable to store count
};

int main() {
    // Creating an instance of Counter class
    Counter c;

    // Using the increment function to increase count
    c.increment();
    c.increment();
    c.increment();

    // Displaying the final count
    std::cout << "Final count is: " << c.getCount() << std::endl;

    // Destructor will be automatically called when the object goes out of scope
    return 0;
}

