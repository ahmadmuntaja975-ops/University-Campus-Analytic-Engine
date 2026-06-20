#include "attendance.h"
#include <iostream>
#include <fstream>

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
            void markAttendance()
            {
                string rollNo, courseCode, status;

                cout << "\nEnter Roll Number: ";
                cin >> rollNo;

                cout << "Enter Course Code: ";
                cin >> courseCode;

                cout << "Enter Status (Present/Absent): ";
                cin >> status;

                ofstream file("attendance.txt", ios::app);

                file << rollNo << " "
                    << courseCode << " "
                    << status << endl;

                file.close();

                cout << "\nAttendance Marked Successfully!\n";
            }
            break;

        case 2:
            void viewAttendance()
            {
                string rollNo, courseCode, status;

                ifstream file("attendance.txt");

                cout << "\n===== ATTENDANCE RECORDS =====\n";

                while(file >> rollNo >> courseCode >> status)
                {
                    cout << rollNo << " "
                        << courseCode << " "
                        << status << endl;
                }

                            file.close();
            }
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