#include <iostream>
#include <cmath> // for M_PI
using namespace std;

class Circle; // Forward declaration

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) : length(l), width(w) {}

    // Friend function declaration to compare the areas
    friend bool compareArea(Rectangle& rect, Circle& circ);
};

class Circle {
private:
    double radius;

public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Friend function declaration to compare the areas
    friend bool compareArea(Rectangle& rect, Circle& circ);
};

// Friend function definition to compare areas of Rectangle and Circle
bool compareArea(Rectangle& rect, Circle& circ) {
    double areaRectangle = rect.length * rect.width;
    double areaCircle = M_PI * circ.radius * circ.radius;

    cout << "Area of Rectangle: " << areaRectangle << endl;
    cout << "Area of Circle: " << areaCircle << endl;

    return areaRectangle > areaCircle;
}

int main() {
    Rectangle rect(5.0, 3.0);
    Circle circ(2.5);

    if (compareArea(rect, circ)) {
        cout << "Rectangle has a larger area." << endl;
    } else {
        cout << "Circle has a larger area." << endl;
    }

    return 0;
}
