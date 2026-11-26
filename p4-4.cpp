#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    short int ch;
    string e1;
    string s1;
    int b1;
    int s2;
    int m1;
    int m2;
    int p2;
    int c3;
    int total;
    float avg;
    float per;


    total=m2+p2+c3;
    avg=m2+p2+c3;
    per=(total)/3.0;



    cout << "************************************************" << endl
         << "         STUDENT RECORD MANAGEMENT SYSTEM" << endl
         << "************************************************" << endl;
    cout << endl;
    cout << endl;
    cout << "--------------------Main Menu-------------------" << endl;

M:
    cout << "\n1:Register New Student \n2:Display Student Record \n3:Enter Student Marks \n4:Display Academic Result \n5:Exit";
    cout << "\nEnter Your Choice :";
    cin >> ch;

    switch (ch)
    {
    case 1:
        (ch == 1);
        cout << "************************************************" << endl;
        cout << "              STUDENT REGISTRATION" << endl;
        cout << "************************************************" << endl;
        cout << endl;

        cout << endl;

        cout << "Enter Enrollment Number" << setw(3) << ":" << "  ";
        cin >> e1;
        cout << "Enter Student Name" << setw(8) << ":" << "  ";
        cin >> s1;
        cout << "Enter Branch" << setw(14) << ":" << "  ";
        cin >> b1;
        cout << "Enter Semester" << setw(12) << ":" << "  ";
        cin >> s2;
        cout << "Enter Mobile Number" << setw(7) << ":" << "  ";
        cin >> m1;
        cout << endl;

        cout << "-----------------------------------------------" << endl
             << "STUDENT REGISTRATION" << endl
             << "-----------------------------------------------" << endl;
        cout << endl;
        cout << endl;
        cout << endl;

        cout << "Student Registered Successfully" << endl;
        cout << "------------------------------------------------" << endl;
        cout << endl;

        cout << endl;

        goto M;
    case 2:
        (ch == 2);
        cout << "--------------------Main Menu--------------------" << endl;

        cout << endl;

        cout << endl;

        cout << "Enrollment Number" << setw(9) << ":  " << e1 << endl;
        cout << "Student Name" << setw(14) << ":  " << s1 << endl;
        cout << "Branch" << setw(20) << ":  " << b1 << endl;
        cout << "Semester" << setw(18) << ":  " << s2 << endl;
        cout << "Mobile Number" << setw(13) << ":  " << m1 << endl;
        cout << endl;

        goto M;

    case 3:
        (ch == 3);

        cout << "------------------------------------------------" << endl;
        cout << endl;

        cout << endl;

        cout << "Enter Mathematics Marks" << setw(4) << ":" << "  " << endl;
        cin >> m2;
        cout << "Enter Physics Marks" << setw(7) << ":" << "  " << endl;
        cin >> p2;
        cout << "Enter C.P.F Marks" << setw(9) << ":" << "  " << endl;
        cin >> c3;
        cout << endl;
        total=m2+p2+c3;
    avg=(total)/3.0;
    per=(total)/3.0;



        cout << endl;

        cout << "------------------------------------------------" << endl;
        cout << endl;



        cout << "Entered Marks Successfully" << endl;


        cout << endl;
        cout << "------------------------------------------------" << endl;
        goto M;

        case 4: ( ch==4);

        cout<<"\nTotal Marks"<<setw(11)<<":  "<<total<<endl;
    cout<<"Average Marks"<<setw(9)<<":  "<<avg<<endl;
    cout<<"Percentage"<<setw(12)<<":  "<<per<<"%"<<endl;
    cout<<"\n";
    cout<<"\n";


if(per>=40)
    {
            cout<<"Result"<<setw(20)<<":  PASS"<<endl;



        if(per>=90 && per<=100)
        {
            cout<<"CLASS"<<setw(17)<<":  O"<<endl;
            cout<<"PERFROMANCE"<<setw(7)<<":  "<<"Outstanding"<<endl;
        }
        else if(per>=80 &&per<=90)
        {
            cout<<"CLASS"<<setw(15)<<":  A+"<<endl;
            cout<<"PERFROMANCE"<<setw(7)<<":  "<<"Excellent"<<endl;
        }


        else if(per>=70 &&per<=80)
        {
            cout<<"CLASS"<<setw(15)<<":  A"<<endl;
             cout<<"PERFROMANCE"<<setw(7)<<":  "<<"VERY GOOD"<<endl;
        }


        else if(per>=60 &&per<=70)
        {
            cout<<"CLASS"<<setw(15)<<":  B+"<<endl;
             cout<<"PERFROMANCE"<<setw(7)<<":  "<<"GOOD"<<endl;
        }

        else if(per>=50 &&per<=60)
        {
            cout<<"CLASS"<<setw(15)<<":  B"<<endl;
             cout<<"PERFROMANCE"<<setw(7)<<":  "<<"SATISFACTORY"<<endl;
        }


        else if(per>=40&&per<=50)
        {
            cout<<"CLASS"<<setw(15)<<":  C"<<endl;
             cout<<"PERFROMANCE"<<setw(7)<<":  "<<"NEEDS IMPROVEMENT"<<endl;
        }

        else if(per<=0)
        {
            cout<<"CLASS"<<setw(15)<<":  F"<<endl;
             cout<<"PERFROMANCE"<<setw(7)<<":  "<<"FAILED"<<endl;
        }
    }
        else{
            cout<<"Result"<<setw(15)<<":  FAIL"<<endl; }
            cout <<"************************************************"<<endl;

    }

    return 0;
}
