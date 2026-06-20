#include "course_ops.h"
#include <iostream>
#include <fstream>
#include <cstdio>

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
    string code, name;
    int creditHours;

    cout << "\nEnter Course Code: ";
    cin >> code;

    cout << "Enter Course Name: ";
    cin >> name;

    cout << "Enter Credit Hours: ";
    cin >> creditHours;

    ofstream file("courses.txt", ios::app);

    file << code << " "
         << name << " "
         << creditHours << endl;

    file.close();

    cout << "\nCourse Added Successfully!\n";
}

void searchCourse()
{
    string searchCode;
    string code, name;
    int creditHours;

    bool found = false;

    cout << "\nEnter Course Code: ";
    cin >> searchCode;

    ifstream file("courses.txt");

    while(file >> code >> name >> creditHours)
    {
        if(code == searchCode)
        {
            cout << "\nCourse Found\n";
            cout << "Code: " << code << endl;
            cout << "Name: " << name << endl;
            cout << "Credit Hours: " << creditHours << endl;

            found = true;
            break;
        }
    }

    file.close();

    if(!found)
    {
        cout << "\nCourse Not Found!\n";
    }
}

void updateCourse()
{
    string searchCode;
    string code, name;
    int creditHours;

    cout << "\nEnter Course Code to Update: ";
    cin >> searchCode;

    ifstream file("courses.txt");
    ofstream temp("temp.txt");

    bool found = false;

    while(file >> code >> name >> creditHours)
    {
        if(code == searchCode)
        {
            found = true;

            cout << "\nEnter New Course Name: ";
            cin >> name;

            cout << "Enter New Credit Hours: ";
            cin >> creditHours;

            temp << code << " "
                 << name << " "
                 << creditHours << endl;
        }
        else
        {
            temp << code << " "
                 << name << " "
                 << creditHours << endl;
        }
    }

    file.close();
    temp.close();

    remove("courses.txt");
    rename("temp.txt", "courses.txt");

    if(found)
        cout << "\nCourse Updated Successfully!\n";
    else
        cout << "\nCourse Not Found!\n";
}

void deleteCourse()
{
    string searchCode;
    string code, name;
    int creditHours;

    cout << "\nEnter Course Code to Delete: ";
    cin >> searchCode;

    ifstream file("courses.txt");
    ofstream temp("temp.txt");

    bool found = false;

    while(file >> code >> name >> creditHours)
    {
        if(code == searchCode)
        {
            found = true;
            continue;
        }

        temp << code << " "
             << name << " "
             << creditHours << endl;
    }

    file.close();
    temp.close();

    remove("courses.txt");
    rename("temp.txt", "courses.txt");

    if(found)
        cout << "\nCourse Deleted Successfully!\n";
    else
        cout << "\nCourse Not Found!\n";
}