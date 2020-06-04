// Main .cpp
// Noah670

#include <iostream>

using namespace std;

// include the header file for Banking.h
#include "Banking.h"


// include <conio.h> to use getch()
#include <conio.h>

int main() {

    //
    cout << "Hi Welcome to Glowing Investments!" << endl;
    cout << "Glowing Investments allows you to predict future profits and interest on your investments!" << endl;

    // create a Banking object called firstUser to store the banking information collected from the user
    Banking firstUser;

    // get the initial values from the user
    double userInitial;
    double userMonthly;
    double userInterest;
    int userYears;

    cout << "********************************" << endl;
    cout << "********** Data Input **********" << endl;


    cout << " Enter Initial Investment Amount: ";
    cin >> userInitial;

    // validate user input using a while loop
    while (!cin) {
        // if the user enters an input that is not an integer or double  print an error message
        cout << "Invalid initial investment amount! Please enter a valid number: ";
        cin.clear(); // clear the input stream
        cin.ignore(); // ignore the previous invalid input that was entered
        cin >> userInitial; // prompt the user again for a valid number

    }

    cout << " Enter Monthly Deposit: ";
    cin >> userMonthly;

    while (!cin) {
        // user enters an input that is not a valid int or double
        cout << "Invalid Monthly Deposit! Please enter a valid number: ";
        cin.clear(); // clear the input stream
        cin.ignore();// ignore the previous invalid input that was entered
        cin >> userMonthly;// prompt the user again for a valid number
    }


    cout << " Enter Annual Interest (percentage) %: ";
    cin >> userInterest;

    while (!cin) {
        cout << "Invalid Annual interest! Please enter a valid percentage: ";
        cin.clear();// clear the input stream
        cin.ignore();// ignore the previous invalid input that was entered
        cin >> userInterest;// prompt the user again for a valid

    }


    cout << "Enter Number of Years: ";
    cin >> userYears;

    while (!cin) {
        cout << "Invalid Number of Years! Please enter a valid number: ";
        cin.clear();// clear the input stream
        cin.ignore(); // ignore the previous invalid input that was entered
        cin >> userYears; // prompt the user again for a valid number of years
    }

    cout << "Press any key to continue...";
    // use getch() to wait for the user to advance with a key pressed
    getch();


    // First display shows the year-end balances
    // and year-end earned interest if no additional monthly deposits are made
    firstUser.DisplayWithoutDeposits(userInitial, userMonthly, userInterest, userYears);


    // Second display shows balance and year end earned interest with additional monthly deposits
    firstUser.DisplayWithDeposits(userInitial, userMonthly, userInterest, userYears);
    
    cout << "Thank you for using Glowing Investments!" << endl;
    getch();

    return 0;

}
