#include <iostream>
using namespace std;

class Counter {
public:
  
    static int objectCount; 
    int id;

public:
    Counter() {
        objectCount++;
        id = objectCount;
    }

    void displayId() {
        cout << "Object ID: " << id << endl;
    }

    static int getObjectCount()
  {
        return objectCount; 
    }
};

int Counter::objectCount = 0;

int main() {
    cout << "Initial Count: " << Counter::getObjectCount() << endl;

    Counter c1, c2, c3;

    c1.displayId();
    c2.displayId();
    c3.displayId();
  
    cout << "Total Objects Created: " << Counter::getObjectCount() << endl;

    return 0;
}
