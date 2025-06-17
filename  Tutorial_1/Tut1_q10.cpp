/*
    Student ID: CST2309191
    Tutorial 1
    Question 10
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    // Declare input variables
    double LoanAmount, YearlyInterestRate, 
            MonthlyPayment, AmountPaidBack, InterestPaid;
    int NumberofPayments;

    // Get user inputs
    cout << "----------------------------------------" << endl;
    cout << "What's your loan amount: $";
    cin >> LoanAmount;
    cout << "What's your yearly interest rate: %";
    cin >> YearlyInterestRate;
    cout << "What's your number of payments: ";
    cin >> NumberofPayments;
    cout << "----------------------------------------" << endl;

    // Declare calculation variables
    double Payment, Rate, L, N;
    Rate = YearlyInterestRate / 100 / 12;  // Convert annual rate to monthly decimal
    L = LoanAmount;                        // Alias for loan amount
    N = NumberofPayments;                  // Alias for payment count
    
    // Calculate monthly payment using amortization formula
    Payment = (Rate * L) / (1 - pow(1 + Rate, -N));
    
    // Calculate total repayment and interest
    AmountPaidBack = Payment * N;          // Total amount repaid
    InterestPaid = AmountPaidBack - L;     // Total interest paid

    // Configure output formatting (2 decimal places)
    cout << fixed << setprecision(2);
    
    // Display results
    cout << "Loan Amount: $" << LoanAmount << endl;
    cout << "Monthly Interest Rate: " << YearlyInterestRate / 12 << "%" << endl;  // Display monthly rate as percentage
    cout << "Number of Payments: " << NumberofPayments << endl;
    cout << "Monthly Payment: $" << Payment << endl;
    cout << "Amount Paid Back: $" << AmountPaidBack << endl;
    cout << "Interest Paid: $" << InterestPaid << endl;
    cout << "----------------------------------------" << endl;
}