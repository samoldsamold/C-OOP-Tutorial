#include "Inventory.h"

void Inventory::updateTotalCost() {
    totalCost = quantity * cost;
}

Inventory::Inventory(int itemNum, int qty, double itemCost) {
    itemNumber = itemNum;
    quantity = qty;
    cost = itemCost;
    updateTotalCost();
}

void Inventory::setItemNumber(int itemNum) {
    itemNumber = itemNum;
}

void Inventory::setQuantity(int qty) {
    quantity = qty;
    updateTotalCost();
}

void Inventory::setCost(double itemCost) {
    cost = itemCost;
    updateTotalCost();
}

int Inventory::getItemNumber() const {
    return itemNumber;
}

int Inventory::getQuantity() const {
    return quantity;
}

double Inventory::getCost() const {
    return cost;
}

double Inventory::getTotalCost() const {
    return totalCost;
}