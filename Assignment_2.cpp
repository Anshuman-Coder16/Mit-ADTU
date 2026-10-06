#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double breadth;

public:
    
    Rectangle(double l, double b) {
        length = l;
        breadth = b;
    }

    double calculateArea() {
        return length * breadth;
    }

    void displayArea() {
        cout << "Area of the Rectangle: " << calculateArea() << " sq. units" << endl;
    }
    double calculatePerimeter();
    void displayPerimeter();
};

double Rectangle::calculatePerimeter() {
    return 2 * (length + breadth);
}

void Rectangle::displayPerimeter() {
    cout << "Perimeter of the Rectangle: " << calculatePerimeter() << " units" << endl;
}

int main() {
    double userLength, userBreadth;
    
    cout << "Enter the length of the rectangle: ";
    cin >> userLength;
    cout << "Enter the breadth of the rectangle: ";
    cin >> userBreadth;

    Rectangle rect(userLength, userBreadth);

    cout << "\n--- Rectangle Results ---" << endl;
    
    rect.displayArea();
    rect.displayPerimeter();

    return 0;
}
