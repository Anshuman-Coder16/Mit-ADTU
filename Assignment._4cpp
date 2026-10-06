#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
    int empId;
    string name;
    double baseSalary;
    double bonus;

public:
  
    Employee() {
        empId = 0;
        name = "Unknown";
        baseSalary = 0.0;
        bonus = 0.0;
    }

    Employee(int id, string empName, double salary, double empBonus)
  {
        empId = id;
        name = empName;
        baseSalary = salary;
        bonus = empBonus;
    }

    double calculateTotalSalary() 
  {
        return baseSalary + bonus;
    }

    void displayDetails() {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Employee ID   : " << empId << endl;
        cout << "Name          : " << name << endl;
        cout << "Base Salary   : $" << baseSalary << endl;
        cout << "Bonus         : $" << bonus << endl;
        cout << "Total Salary  : $" << calculateTotalSalary() << endl;
    }
};

int main() {
    
    cout << "Creating employee1 using default constructor:";
    Employee employee1;
    employee1.displayDetails();

    cout << "\nCreating employee2 using parameterized constructor:";
    Employee employee2(101, "Alex Morgan", 55000.0, 4500.0);
    employee2.displayDetails();

    return 0;
}
