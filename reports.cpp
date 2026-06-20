#include "reports.h"
#include <iostream>
#include <fstream>

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
    string rollNo, name, department;
    float cgpa;

    ifstream file("students.txt");

    cout << "\n===== STUDENT REPORT =====\n";

    while(file >> rollNo >> name >> department >> cgpa)
    {
        cout << rollNo << " "
             << name << " "
             << department << " "
             << cgpa << endl;
    }

    file.close();
}

void generateCourseReport()
{
    string code, name;
    int creditHours;

    ifstream file("courses.txt");

    cout << "\n===== COURSE REPORT =====\n";

    while(file >> code >> name >> creditHours)
    {
        cout << code << " "
             << name << " "
             << creditHours << endl;
    }

    file.close();
}