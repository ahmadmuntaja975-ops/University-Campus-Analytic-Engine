#include "fee_tracker.h"
#include <iostream>
#include <fstream>

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
    string rollNo, status;
    float amount;

    cout << "\nEnter Roll Number: ";
    cin >> rollNo;

    cout << "Enter Amount: ";
    cin >> amount;

    cout << "Enter Status (Paid/Unpaid): ";
    cin >> status;

    ofstream file("fees.txt", ios::app);

    file << rollNo << " "
         << amount << " "
         << status << endl;

    file.close();

    cout << "\nFee Record Added Successfully!\n";
}

void viewFeeRecords()
{
    string rollNo, status;
    float amount;

    ifstream file("fees.txt");

    cout << "\n===== FEE RECORDS =====\n";

    while(file >> rollNo >> amount >> status)
    {
        cout << rollNo << " "
             << amount << " "
             << status << endl;
    }

    file.close();
}