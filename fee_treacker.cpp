#include "fee_tracker.h"
#include <iostream>

using namespace std;

void feeMenu()
{
    int choice;

    cout << "\n===== FEE TRACKER =====\n";
    cout << "1. Add Fee Record\n";
    cout << "2. View Fee Records\n";
    cout << "0. Back\n";

    cout << "Enter Choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            addFeeRecord();
            break;

        case 2:
            viewFeeRecords();
            break;

        default:
            cout << "Invalid Choice!\n";
    }
}

void addFeeRecord()
{
    cout << "\nAdd Fee Record Function Called\n";
}

void viewFeeRecords()
{
    cout << "\nView Fee Records Function Called\n";
}