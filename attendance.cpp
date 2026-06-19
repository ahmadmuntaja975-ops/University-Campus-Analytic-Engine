#include "attendance.h"
#include <iostream>

using namespace std;

void attendanceMenu()
{
    int choice;

    cout << "\n===== ATTENDANCE MANAGEMENT =====\n";
    cout << "1. Mark Attendance\n";
    cout << "2. View Attendance\n";
    cout << "0. Back\n";

    cout << "Enter Choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            markAttendance();
            break;

        case 2:
            viewAttendance();
            break;

        default:
            cout << "Invalid Choice!\n";
    }
}

void markAttendance()
{
    cout << "\nMark Attendance Function Called\n";
}

void viewAttendance()
{
    cout << "\nView Attendance Function Called\n";
}