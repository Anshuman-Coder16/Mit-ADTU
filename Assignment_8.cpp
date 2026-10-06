#include <iostream>
#include <string>

using namespace std;
class Person {
public:
    string name;
    int age;

    void displayPersonInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
public:
    int rollNumber;
    string course;

    void displayStudentInfo() {
        displayPersonInfo(); 
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Course: " << course << endl;
    }
};

class Vehicle {
public:
    string brand = "Generic Vehicle";

    void startEngine() {
        cout << "Vehicle engine is starting..." << endl;
    }
};

class Car : public Vehicle {
public:
    int numberOfDoors = 4;

    void drive() {
        cout << "Car is moving on the road." << endl;
    }
};

class ElectricCar : public Car {
public:
    int batteryCapacity = 75; 

    void chargeBattery() {
        cout << "Electric car is charging battery..." << endl;
    }
};


int main() {
    cout << "=== Single Inheritance Demo (Person -> Student) ===" << endl;
    Student student;
    student.name = "Alice";
    student.age = 20;
    student.rollNumber = 101;
    student.course = "Computer Science";
    student.displayStudentInfo();

    cout << "\n=== Multilevel Inheritance Demo (Vehicle -> Car -> ElectricCar) ===" << endl;
    ElectricCar myTesla;
    
    myTesla.startEngine(); 
    
    myTesla.drive();       
    cout << "Brand: " << myTesla.brand << endl;
    cout << "Doors: " << myTesla.numberOfDoors << endl;
    
    myTesla.chargeBattery();
    cout << "Battery Capacity: " << myTesla.batteryCapacity << " kWh" << endl;

    return 0;
}
