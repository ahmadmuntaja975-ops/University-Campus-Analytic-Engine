#include <iostream>
#include "filehandler.h"
#include "student_ops.h"

using namespace std;

int main()
{
    createFiles();

    int choice;

    cout << "Campus Analytics Engine Started!" << endl;

    cout << "\n1. Student Management";
    cout << "\n0. Exit";

    cout << "\n\nEnter Choice: ";
    cin >> choice;

    if(choice == 1)
    {
        studentMenu();
    }

    return 0;
}