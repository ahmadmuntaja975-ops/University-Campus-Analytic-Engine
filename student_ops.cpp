#include "student_ops.h"
#include <iostream>
#include <fstream>

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
           void addStudent()
            {
                string rollNo, name, department;
                float cgpa;

                cout << "\nEnter Roll Number: ";
                cin >> rollNo;

                cout << "Enter Name: ";
                cin >> name;

                cout << "Enter Department: ";
                cin >> department;

                cout << "Enter CGPA: ";
                cin >> cgpa;

                ofstream file("students.txt", ios::app);

                file << rollNo << " "
                    << name << " "
                    << department << " "
                    << cgpa << endl;

                file.close();

                cout << "\nStudent Added Successfully!\n";
            }
            break;

        case 2:
           void searchStudent()
            {
                string searchRoll;
                string rollNo, name, department;
                float cgpa;

                bool found = false;

                cout << "\nEnter Roll Number: ";
                cin >> searchRoll;

                ifstream file("students.txt");

                while(file >> rollNo >> name >> department >> cgpa)
                {
                    if(rollNo == searchRoll)
                    {
                        cout << "\nStudent Found\n";
                        cout << "Roll No: " << rollNo << endl;
                        cout << "Name: " << name << endl;
                        cout << "Department: " << department << endl;
                        cout << "CGPA: " << cgpa << endl;

                        found = true;
                        break;
                    }
                }

                file.close();

                if(!found)
                {
                    cout << "\nStudent Not Found!\n";
                }
            }
            break;

        case 3:
            void updateStudent()
            {
                string searchRoll;
                string rollNo, name, department;
                float cgpa;

                cout << "\nEnter Roll Number to Update: ";
                cin >> searchRoll;

                ifstream file("students.txt");
                ofstream temp("temp.txt");

                bool found = false;

                while(file >> rollNo >> name >> department >> cgpa)
                {
                    if(rollNo == searchRoll)
                    {
                        found = true;

                        cout << "\nEnter New Name: ";
                        cin >> name;

                        cout << "Enter New Department: ";
                        cin >> department;

                        cout << "Enter New CGPA: ";
                        cin >> cgpa;

                        temp << rollNo << " "
                            << name << " "
                            << department << " "
                            << cgpa << endl;
                    }
                    else
                    {
                        temp << rollNo << " "
                            << name << " "
                            << department << " "
                            << cgpa << endl;
                    }
                }

                file.close();
                temp.close();

                remove("students.txt");
                rename("temp.txt", "students.txt");

                if(found)
                    cout << "\nStudent Updated Successfully!\n";
                else
                    cout << "\nStudent Not Found!\n";
            }
            break;

        case 4:
            void deleteStudent()
            {
                string searchRoll;
                string rollNo, name, department;
                float cgpa;

                cout << "\nEnter Roll Number to Delete: ";
                cin >> searchRoll;

                ifstream file("students.txt");
                ofstream temp("temp.txt");

                bool found = false;

                while(file >> rollNo >> name >> department >> cgpa)
                {
                    if(rollNo == searchRoll)
                    {
                        found = true;
                        continue;
                    }

                    temp << rollNo << " "
                        << name << " "
                        << department << " "
                        << cgpa << endl;
                }

                file.close();
                temp.close();

                remove("students.txt");
                rename("temp.txt", "students.txt");

                if(found)
                    cout << "\nStudent Deleted Successfully!\n";
                else
                    cout << "\nStudent Not Found!\n";
            }
            break;

        default:
            cout << "Invalid Choice!\n";
    }
}

void addStudent()
{
    string rollNo, name, department;
    float cgpa;

    cout << "\nEnter Roll Number: ";
    cin >> rollNo;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Department: ";
    cin >> department;

    cout << "Enter CGPA: ";
    cin >> cgpa;

    ofstream file("students.txt", ios::app);

    file << rollNo << " "
         << name << " "
         << department << " "
         << cgpa << endl;

    file.close();

    cout << "\nStudent Added Successfully!\n";
}
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