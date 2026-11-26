#include <iostream>
#include <cstring>
using namespace std;

struct studentd
{
    char en[15], sn[40], br[15];

    struct ai
    {
        int sem;
        float per;
        char gr[3];
    } a;

    struct ci
    {
        char mo[15], email[40];
    } c;
};

void setGrade(studentd* e)
{
    if ((*e).a.per >= 80)
        strcpy((*e).a.gr, "A");
    else if ((*e).a.per >= 40)
        strcpy((*e).a.gr, "C");
    else
        strcpy((*e).a.gr, "F");
}

void displayStudent(studentd* e)
{
    cout << "Enrollment Number : " << (*e).en << endl;
    cout << "Student Name      : " << (*e).sn << endl;
    cout << "Branch            : " << (*e).br << endl;
    cout << "Semester          : " << (*e).a.sem << endl;
    cout << "Percentage        : " << (*e).a.per << endl;
    cout << "Grade             : " << (*e).a.gr << endl;
    cout << "Mobile Number     : " << (*e).c.mo << endl;
    cout << "Email ID          : " << (*e).c.email << endl;
}

void displayAcademic(studentd* e)
{
    cout << "Semester   : " << (*e).a.sem << endl;
    cout << "Percentage : " << (*e).a.per << endl;
    cout << "Grade      : " << (*e).a.gr << endl;
}

void updateContact(studentd* e)
{
    cout << "Enter new mobile number: ";
    cin.getline((*e).c.mo, 15);
    cout << "Enter new email ID: ";
    cin.getline((*e).c.email, 40);
}

int main()
{
    studentd e[10];
    int n, choice;

    cout << "********************************************\n";
    cout << "    STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout << "********************************************\n";
    cout << "Enter number of students (1 to 10): ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Enrollment Number: ";
        cin.getline(e[i].en, 15);
        cout << "Student Name: ";
        cin.getline(e[i].sn, 40);
        cout << "Branch: ";
        cin.getline(e[i].br, 15);
        cout << "Semester: ";
        cin >> e[i].a.sem;
        cout << "Percentage: ";
        cin >> e[i].a.per;
        cin.ignore();
        cout << "Mobile Number: ";
        cin.getline(e[i].c.mo, 15);
        cout << "Email ID: ";
        cin.getline(e[i].c.email, 40);

        setGrade(&e[i]);
    }

    cout << "\n--------------- Student Records ---------------\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "--------------------------------------------\n";
        displayStudent(&e[i]);
    }

    cout << "\n----------- Academic Information -----------\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\n" << e[i].en << " - " << e[i].sn << endl;
        displayAcademic(&e[i]);
    }

    cout << "\n----------- Update Contact Information -----------\n";
    cout << "Enter student number to update (1 to " << n << "): ";
    cin >> choice;
    cin.ignore();

    if (choice >= 1 && choice <= n)
    {
        updateContact(&e[choice - 1]);
        cout << "\nUpdated Student Details\n";
        displayStudent(&e[choice - 1]);
    }
    else
        cout << "Invalid student number.\n";

    cout << "\nProgram Executed Successfully\n";
    return 0;
}
