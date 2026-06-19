#include "reports.h"
#include <iostream>

using namespace std;

void reportsMenu()
{
    int choice;

    cout << "\n===== REPORTS =====\n";
    cout << "1. Student Report\n";
    cout << "2. Course Report\n";
    cout << "0. Back\n";

    cout << "Enter Choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            generateStudentReport();
            break;

        case 2:
            generateCourseReport();
            break;

        default:
            cout << "Invalid Choice!\n";
    }
}

void generateStudentReport()
{
    cout << "\nStudent Report Function Called\n";
}

void generateCourseReport()
{
    cout << "\nCourse Report Function Called\n";
}