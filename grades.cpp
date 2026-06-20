#include "grades.h"
#include <iostream>
#include <fstream>

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
    string rollNo, courseCode, grade;

    cout << "\nEnter Roll Number: ";
    cin >> rollNo;

    cout << "Enter Course Code: ";
    cin >> courseCode;

    cout << "Enter Grade: ";
    cin >> grade;

    ofstream file("grades.txt", ios::app);

    file << rollNo << " "
         << courseCode << " "
         << grade << endl;

    file.close();

    cout << "\nGrade Added Successfully!\n";
}

void viewGrades()
{
    string rollNo, courseCode, grade;

    ifstream file("grades.txt");

    cout << "\n===== GRADE RECORDS =====\n";

    while(file >> rollNo >> courseCode >> grade)
    {
        cout << rollNo << " "
             << courseCode << " "
             << grade << endl;
    }

    file.close();
}