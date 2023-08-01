// 07BaseClassSiblingClassInvocations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Shape {
protected:
    string name;

public:
    Shape(string name) : name(name) {}

    void showInfo() {
        cout << "I am a " << name << endl;
    }

    void commonMethod() {
        cout << "This is a common method in Shape" << endl;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    // Default constructor
    Circle() : Shape("Circle"), radius(1.0) {}

    // Parameterized constructor calling the default constructor
    Circle(double radius) : Circle() {
        this->radius = radius;
    }

    double calculateArea() {
        return 3.14 * radius * radius;
    }

    void showInfo() {
        Shape::showInfo();
        cout << "My radius is " << radius << endl;
    }

    void callBaseCommonMethod() {
        Shape::commonMethod();
    }
};

int main() {
    // Creating a Circle object using the default constructor
    Circle defaultCircle;
    defaultCircle.showInfo();
    cout << "Area: " << defaultCircle.calculateArea() << endl;
    defaultCircle.callBaseCommonMethod();
    cout << "------------------------" << endl;

    // Creating a Circle object using the parameterized constructor
    Circle circleWithCustomRadius(5);
    circleWithCustomRadius.showInfo();
    cout << "Area: " << circleWithCustomRadius.calculateArea() << endl;
    circleWithCustomRadius.callBaseCommonMethod();

    return 0;
}
