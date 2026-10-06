#include <iostream>
#include <string>

using namespace std;

class Product {
public:
    string productName;
    double pricePerUnit;
    int monthlySales[12]; 


    void acceptDetails() {
        cout << "Enter Product Name: ";
        cin >> productName;
        cout << "Enter Price Per Unit: ";
        cin >> pricePerUnit;
        
        cout << "Enter sales for 12 months:\n";
        for (int i = 0; i < 12; i++) {
            cout << "Month " << (i + 1) << ": ";
            cin >> monthlySales[i];
        }
    }

    int getTotalQuantitySold() {
        int totalQty = 0;
        for (int i = 0; i < 12; i++) {
            totalQty += monthlySales[i];
        }
        return totalQty;
    }


    double getTotalBill() {
        return getTotalQuantitySold() * pricePerUnit;
    }


    void displayDetails() {
        cout << "\n================ PRODUCT DETAILS ================\n";
        cout << "Product Name         : " << productName << endl;
        cout << "Price Per Unit       : Rs. " << pricePerUnit << endl;
        
        cout << "Monthly Sales        : ";
        for (int i = 0; i < 12; i++) {
            cout << monthlySales[i] << " ";
        }
        cout << endl;
        
        cout << "Total Quantity Sold  : " << getTotalQuantitySold() << endl;
        cout << "Total Bill           : Rs. " << getTotalBill() << endl;
        cout << "-------------------------------------------------\n";
    }
};

int main() {

    Product p;

    p.acceptDetails();
    p.displayDetails();

    return 0;
}
