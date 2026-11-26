#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void displayHeader()
{
    cout << "***********************************" << endl;
    cout << "     STUDENT RESULT SYSTEM" << endl;
    cout << "***********************************" << endl;
}

void acceptStudentDetails(string& enrollment, string& name,
                          string& branch, int& semester, int marks[])
{
    cout << "\nEnter Enrollment Number: ";
    cin >> enrollment;
    cin.ignore(1000, '\n');

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Branch: ";
    getline(cin, branch);

    cout << "Enter Semester: ";
    cin >> semester;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[i];

        while (marks[i] < 0 || marks[i] > 100)
        {
            cout << "Enter marks from 0 to 100: ";
            cin >> marks[i];
        }
    }
}

void calculateAcademicResult(int marks[], int& total,
                             float& percentage, string& grade,
                             string& result)
{
    total = 0;

    for (int i = 0; i < 5; i++)
        total = total + marks[i];

    percentage = total / 5.0;

    if (percentage >= 90)
        grade = "O";
    else if (percentage >= 80)
        grade = "A+";
    else if (percentage >= 70)
        grade = "A";
    else if (percentage >= 60)
        grade = "B+";
    else if (percentage >= 50)
        grade = "B";
    else if (percentage >= 40)
        grade = "C";
    else
        grade = "F";

    if (percentage >= 40)
        result = "PASS";
    else
        result = "FAIL";
}

void displayStudentReport(string enrollment, string name,
                          string branch, int semester, int marks[],
                          int total, float percentage,
                          string grade, string result)
{
    cout << "\n\n========== ACADEMIC REPORT ==========" << endl;
    cout << "Enrollment Number: " << enrollment << endl;
    cout << "Student Name: " << name << endl;
    cout << "Branch: " << branch << endl;
    cout << "Semester: " << semester << endl;

    for (int i = 0; i < 5; i++)
        cout << "Subject " << i + 1 << " Marks: " << marks[i] << endl;

    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << fixed << setprecision(2)
         << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Result: " << result << endl;
    cout << "=====================================" << endl;
}

int main()
{
    string enrollment, name, branch, grade, result;
    int semester, marks[5], total;
    float percentage;

    displayHeader();

    acceptStudentDetails(enrollment, name, branch, semester, marks);

    calculateAcademicResult(marks, total, percentage, grade, result);

    displayStudentReport(enrollment, name, branch, semester, marks,
                         total, percentage, grade, result);

    return 0;
}
