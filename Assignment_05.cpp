#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    float price;

public:
    
    Book(string t, string a, float p) {
        title = t;
        author = a;
        price = p;
        cout << "Parameterized constructor called." << endl;
    }

    Book(const Book &b) {
        title = b.title;
        author = b.author;
        price = b.price;
        cout << "Copy constructor called." << endl;
    }

    void display() {
        cout << "Title  : " << title << endl;
        cout << "Author : " << author << endl;
        cout << "Price  : Rs. " << price << endl;
    }

    ~Book() {
        cout << "Destructor called for " << title << endl;
    }
};

int main() {
    
    Book b1("C++ Programming", "Bjarne Stroustrup", 599.0);

    Book b2(b1);

    cout << "\nOriginal Book Details:" << endl;
    b1.display();

    cout << "\nCopied Book Details:" << endl;
    b2.display();

    return 0;
}
