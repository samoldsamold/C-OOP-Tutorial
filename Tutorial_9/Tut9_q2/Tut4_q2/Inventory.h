#ifndef INVENTORY_H
#define INVENTORY_H

class Inventory {
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

    void updateTotalCost();

public:
    Inventory(int itemNum, int qty, double itemCost);

    // Setters
    void setItemNumber(int itemNum);
    void setQuantity(int qty);
    void setCost(double itemCost);

    // Getters
    int getItemNumber() const;
    int getQuantity() const;
    double getCost() const;
    double getTotalCost() const;
};

#endif