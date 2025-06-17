/*
    Student ID: CST2309191
    Tutorial 11
    Question 5
*/
#include <iostream>
#include <iomanip> // For std::fixed and std::setprecision

// Using the entire standard namespace for simplicity.
using namespace std;

/**
 * @brief A class template to store the dimensions of a room.
 * The template allows the length and width to be different numeric types.
 * @tparam T The data type for the length and width.
 */
template <typename T>
class RoomDimension {
private:
    T length;
    T width;

public:
    /**
     * @brief Default constructor. Initializes dimensions to 0.
     */
    RoomDimension() : length(T()), width(T()) {}

    /**
     * @brief Constructor that accepts the room's dimensions.
     * @param len The length of the room.
     * @param w The width of the room.
     */
    RoomDimension(T len, T w) : length(len), width(w) {}

    /**
     * @brief Calculates and returns the area of the room.
     * @return The area (length * width).
     */
    T getArea() const {
        return length * width;
    }
};

/**
 * @brief A class to calculate the total cost of carpeting a room.
 * It uses a RoomDimension object to store the room's size.
 */
class RoomCarpet {
private:
    RoomDimension<double> dimensions; // Use double for calculations
    double costPerSqFt;

public:
    /**
     * @brief Constructor that accepts room dimensions and cost.
     * @param dim A RoomDimension object (template type is converted to double).
     * @param cost The cost per square foot of the carpet.
     */
    template <typename T>
    RoomCarpet(const RoomDimension<T>& dim, double cost) {
        // We internally convert dimensions to double for consistent calculations
        // by creating a new RoomDimension<double> object.
        this->dimensions = RoomDimension<double>(static_cast<double>(dim.getArea()) / 1.0, 1.0); // A bit of a trick to store area
        this->costPerSqFt = cost;
    }
    
    /**
     * @brief A more direct constructor that takes a double-based dimension object.
     */
    RoomCarpet(const RoomDimension<double>& dim, double cost) : dimensions(dim), costPerSqFt(cost) {}


    /**
     * @brief Calculates and returns the total cost of the carpet.
     * @return Total cost (Area * CostPerSquareFoot).
     */
    double getTotalCost() const {
        return dimensions.getArea() * costPerSqFt;
    }
};

int main() {
    double length, width;
    double price;

    cout << "--- Carpet Cost Calculator ---" << endl;
    cout << "Please enter the dimensions of the room." << endl;

    // Get user input for room dimensions
    cout << "Enter the length (in feet): ";
    cin >> length;
    cout << "Enter the width (in feet): ";
    cin >> width;

    // Get user input for carpet price
    cout << "Enter the price per square foot of the carpet: $";
    cin >> price;

    // Create a RoomDimension object with the user's input.
    // We use <double> to handle potential floating-point dimensions.
    RoomDimension<double> room(length, width);

    // Create a RoomCarpet object.
    RoomCarpet carpet(room, price);

    // Display the results
    cout << "\n--- Calculation Results ---" << endl;
    cout << fixed << setprecision(2); // Set output to two decimal places
    cout << "Room Area: " << room.getArea() << " sq. ft." << endl;
    cout << "Carpet Cost per sq. ft.: $" << price << endl;
    cout << "Total Carpet Cost: $" << carpet.getTotalCost() << endl;

    return 0;
}
