/*
    Student ID: CST2309191
    Tutorial 4
    Question 2
*/
#include <iostream>
#include <iomanip>
#include "Inventory.h"

using namespace std;

int main() {
    Inventory item1(1001, 50, 2.99);
    Inventory item2(1002, 30, 5.49);
    Inventory item3(1003, 20, 10.00);

    cout << fixed << setprecision(2);

    cout << "Item Number: " << item1.getItemNumber()
         << ", Quantity: " << item1.getQuantity()
         << ", Cost: $" << item1.getCost()
         << ", Total Cost: $" << item1.getTotalCost() << endl;

    cout << "Item Number: " << item2.getItemNumber()
         << ", Quantity: " << item2.getQuantity()
         << ", Cost: $" << item2.getCost()
         << ", Total Cost: $" << item2.getTotalCost() << endl;

    cout << "Item Number: " << item3.getItemNumber()
         << ", Quantity: " << item3.getQuantity()
         << ", Cost: $" << item3.getCost()
         << ", Total Cost: $" << item3.getTotalCost() << endl;

    return 0;
}