// Banking.Cpp
// Noah670


#include "Banking.h"

#include <iostream>

#include <iomanip>

using namespace std;

#include "Banking.h"

// include to use pow for calculating compound interest formula
#include<math.h>


//Setters

void Banking::SetInitial(double initial) {
    initialInvestment = initial;
}

void Banking::SetMonthly(double monthly) {
    monthlyInterest = monthly;
}

void Banking::SetAnnual(double annual) {
    annualInterest = annual;
}

void Banking::SetYears(int years) {
    numYears = years;
}

// Getters
double Banking::GetInitial() {
    return initialInvestment;
}

double Banking::GetMonthly() {
    return monthlyInterest;
}

double Banking::GetAnnual() {
    return annualInterest;
}

int Banking::GetYears() {
    return numYears;
}


// Input Displays

// Banking Input Display for testing purposes
void Banking::BankingInput(double initial, double monthly, double annual, int years) {
    cout << "hi there" << endl;
    cout << "Testing first display" << endl;


}


// Display 1
// First Display function which shows the year-end balance with no additional monthly deposits
void Banking::DisplayWithoutDeposits(double initial, double monthly, double annual, int years) {

    //cout << endl << "Testing first display" << endl; test output

    double interest;

    // Set the values for all of the user input values
    SetInitial(initial);
    SetMonthly(monthly);
    SetAnnual(annual);
    SetYears(years);


    // convert to decimal percentage
    interest = GetAnnual() / 100;

    double yearEndBalance = GetInitial();

    double fixedInterest = GetAnnual() / 100;


    cout << "Balance and Interest Without Additional Monthly Deposits" << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << "  Year      Year End Balance    Year End Earned Interest" << endl;
    cout << "--------------------------------------------------------" << endl;

    // for loop to display all of the years entered by the user
    for (int i = 1; i <= GetYears(); ++i) {

        yearEndBalance = yearEndBalance + interest;

        interest = yearEndBalance * fixedInterest;

        cout << fixed << setprecision(2) << "    " << i << "                   $" << yearEndBalance
             << "                    $" << interest << endl;
        cout << endl;


    }


}


// Display 2
// Second Display function which shows the year-end balance with additional monthly deposits
void Banking::DisplayWithDeposits(double initial, double monthly, double annual, int years) {
    //cout << endl << "Testing second display" << endl;

    // Set the values for all of the user input values
    SetInitial(initial);
    SetMonthly(monthly);
    SetAnnual(annual);
    SetYears(years);

    // convert to decimal percentage
    double fixedInterest = GetAnnual() / 100;

    // initial total amount
    double total;

    // the yearly interest to be displayed later
    double yearlyInterest;

    // store the interest calculated monthly
    double storeInterest;

    // the total gets the initial amount from the user so the stored interest can be added later
    total = GetInitial();

    cout << "Balance and Interest With Additional Monthly Deposits" << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << "  Year      Year End Balance    Year End Earned Interest" << endl;
    cout << "--------------------------------------------------------" << endl;

    // For loop to display all of the years entered by the user
    for (int i = 1; i <= GetYears(); ++i) {


        // set total amount of yearly Interest to 0 at the start
        yearlyInterest = 0;

        //loops through the number of months to get the monthly interest and total
        for (int j = 0; j < 12; ++j) {

            //calculate monthly interest
            storeInterest = (total + GetMonthly()) * (fixedInterest / 12);

            // month end interest
            yearlyInterest = yearlyInterest + storeInterest;

            // month end total
            total = total + GetMonthly() + storeInterest;


        }
        // Display the number of years and the balance and interest
        cout << fixed << setprecision(2) << "    " << i << "              $" << setw(7) << total
             << "                    $" << yearlyInterest << endl;
        cout << endl;


    }


}



