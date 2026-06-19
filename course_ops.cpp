#include "course_ops.h"
#include <iostream>

using namespace std;

void courseMenu()
{
    int choice;

    cout << "\n===== COURSE MANAGEMENT =====\n";
    cout << "1. Add Course\n";
    cout << "2. Search Course\n";
    cout << "3. Update Course\n";
    cout << "4. Delete Course\n";
    cout << "0. Back\n";

    cout << "Enter Choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            addCourse();
            break;

        case 2:
            searchCourse();
            break;

        case 3:
            updateCourse();
            break;

        case 4:
            deleteCourse();
            break;

        default:
            cout << "Invalid Choice!\n";
    }
}

void addCourse()
{
    cout << "\nAdd Course Function Called\n";
}

void searchCourse()
{
    cout << "\nSearch Course Function Called\n";
}

void updateCourse()
{
    cout << "\nUpdate Course Function Called\n";
}

void deleteCourse()
{
    cout << "\nDelete Course Function Called\n";
}