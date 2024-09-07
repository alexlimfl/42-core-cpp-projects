#include <iostream>

/*
    In this example:

    getCount() is a static member function of the Counter class. 
    It can be called using the class name (Counter::getCount()), 
    and it returns the total count of instances created.
    getInstanceCount() is a non-static member function of the Counter class. 
    It can only be called on an instance of the class (c1.getInstanceCount()), 
    and it returns the count of the specific instance on which it is called.
    
    The key difference is that static member functions operate at the class 
    level and do not have access to any specific instance's data, 
    while non-static member functions operate at the instance level 
    and can access and modify instance data.
*/

class Counter {
public:
    // Constructor
    Counter() {
        count++;
        instanceCount++;
    }

    // Static member function to get the total count of instances
    static int getCount() {
        return count;
    }

    // Non-static member function to get the count of the specific instance
    int getInstanceCount() {
        return instanceCount;
    }

private:
    // Static member variable to store the total count of instances
    static int count;

    // Non-static member variable to store the count of the specific instance
    int instanceCount = 0;
};

// Initialize static member variable
int Counter::count = 0;

int main() {
    // Create instances of Counter class
    Counter c1, c2, c3;

    // Call static member function to get total count of instances
    std::cout << "Total count of instances (static member function): " << Counter::getCount() << std::endl;

    // Call non-static member function to get count of c1
    std::cout << "Count of c1 (non-static member function): " << c1.getInstanceCount() << std::endl;

    // Call non-static member function to get count of c2
    std::cout << "Count of c2 (non-static member function): " << c2.getInstanceCount() << std::endl;

    return 0;
}
