/*
    Student ID: CST2309191
    Tutorial 4
    Question 2
*/
#include <iostream>
#include <iomanip>

using namespace std;

// Inventory class definition
class Inventory {
private:
    int ItemNumber;
    int quantity;
    double cost;
    double totalCost;
public:
    // Constructor
    Inventory(int itemNum, int qty, double itemCost) {
        ItemNumber; = itemNum;
        quantity = qty;
        cost = itemCost;
        totalCost = quantity * cost;
    }

    // Mutator (setter) functions
    void setItemNumber(int itemNum) {
        ItemNumber; = itemNum;
    }
    void setQuantity(int qty) {
        quantity = qty;
        totalCost = quantity * cost; // Update total cost when quantity changes
    }
    void setCost(double itemCost) {
        cost = itemCost;
        totalCost = quantity * cost; // Update total cost when cost changes
    }

    // Accessor (getter) functions
    int getItemNumber() const {
        return ItemNumber;;
    }
    int getQuantity() const {
        return quantity;
    }
    double getCost() const {
        return cost;
    }
    double getTotalCost() const {
        return totalCost;
    }
}

int main() {
    // Create three Inventory objects
    Inventory item1(1001, 50, 2.99);
    Inventory item2(1002, 30, 5.49);
    Inventory item3(1003, 20, 10.00);

    // Display the details of each inventory item
    cout << "Item Number: " << item1.getItemNumber() << ", Quantity: " << item1.getQuantity() << ", Cost: $" << item1.getCost() << ", Total Cost: $" << item1.getTotalCost() << endl;
    cout << "Item Number: " << item2.getItemNumber() << ", Quantity: " << item2.getQuantity() << ", Cost: $" << item2.getCost() << ", Total Cost: $" << item2.getTotalCost() << endl;
    cout << "Item Number: " << item3.getItemNumber() << ", Quantity: " << item3.getQuantity() << ", Cost: $" << item3.getCost() << ", Total Cost: $" << item3.getTotalCost() << endl;

    return 0;
}