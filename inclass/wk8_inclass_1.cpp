#include <iostream>
using namespace std;

int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

int multiply(int a, int b, int c) {
    return a * b * c;
}

int main() {
    cout << "2 * 3 = " << multiply(2, 3) << endl;                    // 调用第一个重载
    cout << "2.5 * 3.5 = " << multiply(2.5, 3.5) << endl;            // 调用第二个重载
    cout << "2 * 3 * 4 = " << multiply(2, 3, 4) << endl;             // 调用第三个重载
    
    return 0;
}