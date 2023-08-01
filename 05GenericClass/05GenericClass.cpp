#include <iostream>

// Generic class for a simple container
template<typename T>
class MyContainer {
private:
    T element;

public:
    MyContainer(T val) : element(val) {}

    T getElement() const {
        return element;
    }

    void setElement(T val) {
        element = val;
    }
};

int main() {
    MyContainer<int> intContainer(42);          // Creating a container for integers
    MyContainer<double> doubleContainer(3.14);  // Creating a container for doubles
    MyContainer<char> charContainer('A');       // Creating a container for characters

    // Modifying elements in the containers
    intContainer.setElement(99);
    doubleContainer.setElement(2.718);
    charContainer.setElement('Z');

    // Getting elements from the containers
    std::cout << "Integer container: " << intContainer.getElement() << std::endl;
    std::cout << "Double container: " << doubleContainer.getElement() << std::endl;
    std::cout << "Character container: " << charContainer.getElement() << std::endl;

    return 0;
}

