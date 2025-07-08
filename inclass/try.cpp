#include <iostream>
#include <vector>
#include <string>
#include <iomanip>  // for setprecision

using namespace std;

int main() {
    const int NUM_MONTHS = 12;
    vector<double> rainfall(NUM_MONTHS);
    vector<string> months = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    cout << "Enter the total rainfall for each month:\n";
    for (int i = 0; i < NUM_MONTHS; ++i) {
        cout << months[i] << ": ";
        cin >> rainfall[i];
    }
    double totalRainfall = 0.0;
    for (int i = 0; i < NUM_MONTHS; ++i) {
        totalRainfall += rainfall[i];
    }
    

    double averageRainfall = totalRainfall / NUM_MONTHS;

    cout << fixed << setprecision(2);
    cout << "Total rainfall for the year: $" << totalRainfall << endl;
    cout << "Average monthly rainfall: $" << averageRainfall << endl;

    return 0;
}
