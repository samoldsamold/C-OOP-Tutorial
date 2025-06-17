/*
    Student ID: CST2309191
    Tutorial 1
    Question 1
*/
#include <iostream>
#include <cmath>
using namespace std;

// Calculate the volume of a sphere
double sphereVolume(double r)
{
    return (4.0 / 3.0) * M_PI * pow(r, 3);
}

int main()
{
    // Define the radius of the sphere
    double r = 5.6;

    // Calculate the volume by calling the sphereVolume function
    double volume = sphereVolume(r);

    // Print the result
    cout << "Volume: " << volume << endl;
    return 0;
}