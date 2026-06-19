#include <iostream>
#include "filehandler.h"
#include "student_ops.h"
#include "course_ops.h"
#include "attendance.h"
#include "grades.h"
#include "fee_tracker.h"
#include "reports.h"

using namespace std;

int main()
{
    createFiles();

    int choice;

    do
    {
        cout << "\n------------------------------------\n";
        cout << "    CAMPUS ANALYTICS ENGINE\n";
        cout << "------------------------------------\n";
        cout << "1. Student Management\n";
        cout << "2. Course Management\n";
        cout << "3. Attendance\n";
        cout << "4. Grades\n";
        cout << "5. Fee Tracker\n";
        cout << "6. Reports\n";
        cout << "0. Exit\n";

        cout << "\nEnter Choice: ";
        cin >> choice;
        switch(choice)
            {
                case 1:
                    studentMenu();
                    break;

                case 2:
                    courseMenu();
                    break;

                case 3:
                    attendanceMenu();
                    break;    
                case 4:
                    gradesMenu();
                    break;
                case 5:
                    feeMenu();
                    break;  
                case 6:
                    reportsMenu();
                    break;      
                case 0:
                    cout << "\nProgram Closed.\n";
                    break;

                default:
                    cout << "\nModule Not Added Yet.\n";
            }

    } while(choice != 0);

    return 0;
}