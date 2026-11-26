#include <iostream>
#include <iomanip>
using namespace std;

struct Student
{
    string en;
    string name;
    string br;
    int sem;
    float per;
    string gr;
};

string calculateGr(float per)
{
    if (per >= 90)
        return "O";
    else if (per >= 85)
        return "A+";
    else if (per >= 80)
        return "A";
    else if (per >= 70)
        return "B";
    else if (per >= 60)
        return "C";
    else
        return "F";
}

void inputS(Student *ptr, int n)
{
    cout << "Enter Student Details\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << endl;

        cout << "Enrollment Number : ";
        cin >> (ptr + i)->en;

        cin.ignore();

        cout << "Student Name : ";
        getline(cin, (ptr + i)->name);

        cout << "Branch : ";
        cin >> (ptr + i)->br;

        cout << "Semester : ";
        cin >> (ptr + i)->sem;

        cout << "Percentage : ";
        cin >> (ptr + i)->per;

        (ptr + i)->gr = calculateGr((ptr + i)->per);

        cout << "Grade : " << (ptr + i)->gr << endl;
        cout << "--------------------------------------------\n";
    }
}

void displayS(Student *ptr, int n)
{
    cout << "Student Records using Address-based Access\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Address : " << (void*)(ptr + i) << endl;

        cout << (ptr + i)->en << " "
             << (ptr + i)->name << " "
             << (ptr + i)->br << " "
             << (ptr + i)->sem << " "
             << fixed << setprecision(2) << (ptr + i)->per << " "
             << (ptr + i)->gr << endl;

        cout << "--------------------------------------------\n";
    }
}

void academicSum(Student *ptr, int n)
{
    float total = 0;
    float highest = (ptr)->per;
    float lowest = (ptr)->per;

    for (int i = 0; i < n; i++)
    {
        total += (ptr + i)->per;

        if ((ptr + i)->per> highest)
            highest = (ptr + i)->per;

        if ((ptr + i)->per < lowest)
            lowest = (ptr + i)->per;
    }

    cout << "Academic Summary\n";
    cout << fixed << setprecision(2);

    cout << "Class Average Percentage : " << total / n << " %\n";
    cout << "Highest Percentage : " << highest << " %\n";
    cout << "Lowest Percentage : " << lowest << " %\n";
    cout << "--------------------------------------------\n";
}

int main()
{
    int n;

    cout << "********************************************\n";
    cout << " STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout << "********************************************\n";

    cout << "Enter Number of Students : ";
    cin >> n;

    Student *ptr = new Student[n];

    cout << "Dynamic Memory Allocated Successfully\n";
    cout << "--------------------------------------------\n";

    inputS(ptr, n);
    displayS(ptr, n);
    academicSum(ptr, n);

    delete[] ptr;
    ptr = nullptr;

    cout << "Dynamic Memory Released Successfully\n";
    cout << "Address Variable Reset Successfully\n";
    cout << "--------------------------------------------\n";

    cout << "Program Executed Successfully\n";
    cout << "--------------------------------------------\n";

    return 0;
}
