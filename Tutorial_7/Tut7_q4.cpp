/*
    Student ID: CST2309191
    Tutorial 7
    Question 4
*/

#include <iostream>
#include <string>

using namespace std;

// Assuming CustomerData class from Question 4
class CustomerData {
protected:
    string name;
    string address;
    string phoneNumber;
public:
    CustomerData() : name(""), address(""), phoneNumber("") {}
    CustomerData(string n, string a, string p) 
        : name(n), address(a), phoneNumber(p) {}
};

class PreferredCustomer : public CustomerData {
private:
    double purchasesAmount;
    double discountLevel;
    
    // Update discount level based on purchasesAmount
    void updateDiscountLevel() {
        if (purchasesAmount >= 2000.0) {
            discountLevel = 0.10;
        } else if (purchasesAmount >= 1500.0) {
            discountLevel = 0.07;
        } else if (purchasesAmount >= 1000.0) {
            discountLevel = 0.06;
        } else if (purchasesAmount >= 500.0) {
            discountLevel = 0.05;
        } else {
            discountLevel = 0.0;
        }
    }

public:
    // Default constructor
    PreferredCustomer() : CustomerData(), purchasesAmount(0.0), discountLevel(0.0) {}
    
    // Constructor with CustomerData parameters and purchases
    PreferredCustomer(string n, string a, string p, double purchases)
        : CustomerData(n, a, p), purchasesAmount(purchases) {
        updateDiscountLevel();
    }
    
    // Set purchases amount and update discount
    void setPurchasesAmount(double amount) {
        purchasesAmount = amount;
        updateDiscountLevel();
    }
    
    double getPurchasesAmount() const { return purchasesAmount; }
    double getDiscountLevel() const { return discountLevel; }
};

int main() {
    // Demonstrate PreferredCustomer class
    PreferredCustomer customer1("Alice", "456 Elm St", "555-0001", 750.0);
    cout << "Alice's discount: " << customer1.getDiscountLevel() * 100 << "%\n"; // 5%
    
    PreferredCustomer customer2;
    customer2.setPurchasesAmount(1200.0);
    cout << "Bob's discount: " << customer2.getDiscountLevel() * 100 << "%\n"; // 6%
    
    customer2.setPurchasesAmount(1800.0);
    cout << "Bob's updated discount: " << customer2.getDiscountLevel() * 100 << "%\n"; // 7%
    
    customer2.setPurchasesAmount(2500.0);
    cout << "Bob's final discount: " << customer2.getDiscountLevel() * 100 << "%\n"; // 10%
    
    return 0;
}