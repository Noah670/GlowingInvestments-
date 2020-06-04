// Banking.h
// Noah670


#ifndef BANKING_BANKING_H
#define BANKING_BANKING_H

#include <string>

using namespace std;

// class defintion for Banking
class Banking {

public: // Access specifier
    int years;
    string name;

    //setters

    void SetInitial(double initial);

    void SetMonthly(double monthly);

    void SetAnnual(double annual);

    void SetYears(int years);

    // getters

    double GetInitial();

    double GetMonthly();

    double GetAnnual();

    int GetYears();


    //input display for testing purposes
    void BankingInput(double initial, double monthly, double annual, int years);

    // Display 1 that does not include deposits

    void DisplayWithoutDeposits(double initial, double monthly, double annual, int years);


    // Display 2 which includes deposits
    void DisplayWithDeposits(double initial, double monthly, double annual, int years);


private: // only accessible by the class
    // set the initial default values
    double initialInvestment = 0.0;
    double monthlyInterest = 0.0;
    double annualInterest = 0.0;
    int numYears = 0;

};


#endif //NEWBANKING_BANKING_H
