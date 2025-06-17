/*
    Student ID: CST2309191
    Tutorial 6
    Question 3
*/
#include <iostream>

using namespace std;

class RetailItem {
    private:
        string description;
        int unitsOnHand;
        double price;
    public:
        RetailItem(string desc, int units, double price) 
            : description(desc), unitsOnHand(units), price(price) {}
        
        string getDescription() const {
            return description;
        }
        
        int getUnitsOnHand() const {
            return unitsOnHand;
        }
        
        double getPrice() const {
            return price;
        }
};

class CashRegister {
    private:
        double totalCost;
    public:
        CashRegister() : totalCost(0.0) {}
        
         getSubtal(RetailItem item, int quantity) {
            if (quantity > item.getUnitsOnHand()) {
                cout << "Not enough units on hand." << endl;
                return;
            }
            totalCost += item.getPrice() * quantity;
        }
        double getTax() const {
            return totalCost * 0.07; // Assuming a tax rate of 7%
        }
        double getTotal() const {
            return totalCost + getTax();
        }
};

int main() {
    RetailItem item1("Jacket", 12, 59.95);
    RetailItem item2("Designer Jeans", 40, 34.95);
    RetailItem item3("Shirt", 20, 24.95);
    
    CashRegister register1;
    
    int quantity;
    
    cout << "Enter quantity for " << item1.getDescription() << ": ";
    cin >> quantity;
    register1.getSubtal(item1, quantity);
    
    cout << "Enter quantity for " << item2.getDescription() << ": ";
    cin >> quantity;
    register1.getSubtal(item2, quantity);
    
    cout << "Enter quantity for " << item3.getDescription() << ": ";
    cin >> quantity;
    register1.getSubtal(item3, quantity);
    
    cout << "Subtotal: $" << register1.getTotal() - register1.getTax() << endl;
    cout << "Tax: $" << register1.getTax() << endl;
    cout << "Total: $" << register1.getTotal() << endl;
    
    return 0;
}
