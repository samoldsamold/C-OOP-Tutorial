/*
    Student ID: CST2309191
    Tutorial 11
    Question 4
*/
#include <iostream>
#include <iomanip> // For std::fixed and std::setprecision

using namespace std;

template <typename T>
class Circle {
private:
    // Member Variables
    T radius;
    double area;
    double diameter;
    double circumference;
    const double pi = 3.14159;

    // Private Member Functions for Calculations
    /**
     * @brief Calculates the area of the circle.
     * Formula: PI * radius^2
     */
    void calcArea() {
        area = pi * radius * radius;
    }

    /**
     * @brief Calculates the diameter of the circle.
     * Formula: radius * 2
     */
    void calcDiameter() {
        diameter = radius * 2.0;
    }


    //Calculates the circumference of the circle.
    void calcCircumference() {
        circumference = 2.0 * pi * radius;
    }

public:
    //@brief Constructor that accepts the circle's radius.
    Circle(T rad) {
        // A non-positive radius is not valid for a circle.
        if (rad > 0) {
            radius = rad;
        } else {
            radius = T(); // Default-construct (0 for numeric types)
        }
        // Calculate the properties upon creation.
        calcArea();
        calcDiameter();
        calcCircumference();
    }

    /**
     * @brief Sets a new radius for the circle (mutator).
     * @param newRadius The new radius.
     */
    void setRadius(T newRadius) {
        if (newRadius > 0) {
            radius = newRadius;
            // Recalculate properties whenever the radius changes.
            calcArea();
            calcDiameter();
            calcCircumference();
        }
    }

    /**
     * @brief Gets the current radius of the circle (accessor).
     * @return The radius.
     */
    T getRadius() const {
        return radius;
    }

    /**
     * @brief Gets the calculated area of the circle.
     * @return The area.
     */
    double getArea() const {
        return area;
    }

    /**
     * @brief Gets the calculated diameter of the circle.
     * @return The diameter.
     */
    double getDiameter() const {
        return diameter;
    }

    /**
     * @brief Gets the calculated circumference of the circle.
     * @return The circumference.
     */
    double getCircumference() const {
        return circumference;
    }
};

int main() {
    cout << "--- Testing the Circle Class Template ---" << endl;
    
    // Set output precision for floating-point numbers
    cout << fixed << setprecision(2);

    // --- Create a Circle with an integer radius ---
    Circle<int> intCircle(10);
    cout << "\n--- Integer Radius Circle ---" << endl;
    cout << "Radius: " << intCircle.getRadius() << endl;
    cout << "Area: " << intCircle.getArea() << endl;
    cout << "Diameter: " << intCircle.getDiameter() << endl;
    cout << "Circumference: " << intCircle.getCircumference() << endl;

    // --- Create a Circle with a double radius ---
    Circle<double> doubleCircle(7.5);
    cout << "\n--- Double Radius Circle ---" << endl;
    cout << "Radius: " << doubleCircle.getRadius() << endl;
    cout << "Area: " << doubleCircle.getArea() << endl;
    cout << "Diameter: " << doubleCircle.getDiameter() << endl;
    cout << "Circumference: " << doubleCircle.getCircumference() << endl;
    
    // --- Demonstrate the setRadius mutator function ---
    cout << "\n--- Updating Double Circle's Radius ---" << endl;
    doubleCircle.setRadius(12.25);
    cout << "New Radius: " << doubleCircle.getRadius() << endl;
    cout << "New Area: " << doubleCircle.getArea() << endl;
    cout << "New Diameter: " << doubleCircle.getDiameter() << endl;
    cout << "New Circumference: " << doubleCircle.getCircumference() << endl;


    return 0;
}
