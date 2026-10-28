#include <iostream>
#include <string>

using namespace std;

// Multiple inheritance: Employee inherits from two classes.
class PersonalDetails {
public:
    string name;
    int age;

    void displayPersonalDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class SalaryDetails {
public:
    double basicSalary;
    double allowance;

    void displaySalaryDetails() {
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Allowance: " << allowance << endl;
        cout << "Total Salary: " << basicSalary + allowance << endl;
    }
};

class Employee : public PersonalDetails, public SalaryDetails {
public:
    int employeeId;

    void displayEmployeeDetails() {
        cout << "Employee ID: " << employeeId << endl;
        displayPersonalDetails();
        displaySalaryDetails();
    }
};

// Hierarchical inheritance: Circle and Rectangle inherit from Shape.
class Shape {
public:
    void displayShape() {
        cout << "Calculating the area of a shape." << endl;
    }
};

class Circle : public Shape {
public:
    double radius;

    void displayArea() {
        displayShape();
        cout << "Area of Circle: " << 3.14159 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
public:
    double length;
    double breadth;

    void displayArea() {
        displayShape();
        cout << "Area of Rectangle: " << length * breadth << endl;
    }
};

int main() {
    cout << "=== Multiple Inheritance Demo ===" << endl;
    Employee employee;
    employee.employeeId = 101;
    employee.name = "Anshuman";
    employee.age = 25;
    employee.basicSalary = 30000;
    employee.allowance = 5000;
    employee.displayEmployeeDetails();

    cout << "\n=== Hierarchical Inheritance Demo ===" << endl;
    Circle circle;
    circle.radius = 5;
    circle.displayArea();

    Rectangle rectangle;
    rectangle.length = 10;
    rectangle.breadth = 4;
    rectangle.displayArea();

    return 0;
}
