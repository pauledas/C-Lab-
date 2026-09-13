#include <iostream>
using namespace std;

class Shape {
    float radius, length, width;
public:
    Shape(float r, float l, float w) : radius(r), length(l), width(w) {
        cout << "Constructor called\n";
    }
    float circlePerimeter() { return 2 * 3.14159 * radius; }
    float rectPerimeter() { return 2 * (length + width); }
    ~Shape() { cout << "Destructor called\n"; }
};

int main() {
    Shape s(5, 4, 3);
    cout << "Circle Perimeter: " << s.circlePerimeter() << endl;
    cout << "Rectangle Perimeter: " << s.rectPerimeter() << endl;
    return 0;
}