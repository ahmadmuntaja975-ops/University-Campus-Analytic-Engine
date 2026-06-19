#include "student_ops.h"
#include <iostream>

using namespace std;

void studentMenu()
{
    int choice;

    cout << "\n===== STUDENT MANAGEMENT =====\n";
    cout << "1. Add Student\n";
    cout << "2. Search Student\n";
    cout << "3. Update Student\n";
    cout << "4. Delete Student\n";
    cout << "0. Back\n";

    cout << "Enter Choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            addStudent();
            break;

        case 2:
            searchStudent();
            break;

        case 3:
            updateStudent();
            break;

        case 4:
            deleteStudent();
            break;

        default:
            cout << "Invalid Choice!\n";
    }
}

void addStudent()
{
    cout << "\nAdd Student Function Called\n";
}

void searchStudent()
{
    cout << "\nSearch Student Function Called\n";
}

void updateStudent()
{
    cout << "\nUpdate Student Function Called\n";
}

void deleteStudent()
{
    cout << "\nDelete Student Function Called\n";
}