#include "grades.h"
#include <iostream>

using namespace std;

void gradesMenu()
{
    int choice;

    cout << "\n===== GRADES MANAGEMENT =====\n";
    cout << "1. Add Grade\n";
    cout << "2. View Grades\n";
    cout << "0. Back\n";

    cout << "Enter Choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            addGrade();
            break;

        case 2:
            viewGrades();
            break;

        default:
            cout << "Invalid Choice!\n";
    }
}

void addGrade()
{
    cout << "\nAdd Grade Function Called\n";
}

void viewGrades()
{
    cout << "\nView Grades Function Called\n";
}