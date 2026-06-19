#include "filehandler.h"
#include <fstream>

using namespace std;

void createFiles()
{
    ofstream students("students.txt", ios::app);
    ofstream courses("courses.txt", ios::app);
    ofstream attendance("attendance.txt", ios::app);
    ofstream grades("grades.txt", ios::app);
    ofstream fees("fees.txt", ios::app);

    students.close();
    courses.close();
    attendance.close();
    grades.close();
    fees.close();
}