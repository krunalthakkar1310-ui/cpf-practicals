#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
    float SoftwareVersion;
    string Institute;
    string AcademicYear;
    string e1;
    string s1,b1;

    int s2;
    long long m1;


    cout <<"************************************************"<<endl<<
           "        STUDENT RECORD MANAGEMENT SYSTEM"<<endl<<
           "************************************************"<<endl;
         cout<<endl;
         cout<<endl;




    cout<<"Enter Software Version :  ";
    cin>>SoftwareVersion;


    cout<<"Enter Institute"<<setw(11)<<":  ";
    cin.ignore();
    getline(cin,Institute);

    cout<<"Enter Academic Year"<<setw(7)<<":  ";
    cin>>AcademicYear;

    cout<<endl;
    cout<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<endl;
    cout<<endl;


    cout<<"Software version"<<setw(10)<<":  "<<SoftwareVersion<<endl;
    cout<<"Institute"<<setw(17)<<":  "<<Institute<<endl;
    cout<<"Academic Year"<<setw(13)<<":  "<<AcademicYear<<endl;
    cout<<endl;
    cout<<endl;


    cout<<"---------------------------------------------"<<endl<<
        "STUDENT REGISTRATION"<<endl<<
        "---------------------------------------------"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\nEnter Enrollment Number"<<setw(3)<<":"<<"  ";
    cin>>e1;
    cout<<"Enter Student Name"<<setw(8)<<":"<<"  ";
    cin.ignore();
    getline(cin,s1);
    cout<<"Enter Branch"<<setw(14)<<":"<<"  ";
    cin>>b1;
    cout<<"Enter Semester"<<setw(12)<< ":"<< "  ";
    cin>>s2;
    cout<<"Enter Mobile Number"<<setw(7)<<":"<<"  ";
    cin>>m1;
    cout<<endl;
    cout<<endl;

    cout<<"---------------------------------------------"<<endl<<
        "STUDENT INFORMATION"<<endl<<
        "---------------------------------------------"<<endl;
    cout<<endl;
    cout<<endl;


    cout<<"Enrollment Number"<<setw(11)<<":  "<<e1<<endl;
    cout<<"Student Name"<<setw(16)<<":  "<<s1<<endl;
    cout<<"Branch"<<setw(22)<<":  "<<b1<<endl;
    cout<<"Semester"<<setw(20)<<":  "<<s2<<endl;
    cout<<"Mobile Number"<<setw(15)<<":  "<<m1<<endl;
    cout<<endl;
    cout<<endl;


    cout<<"---------------------------------------------"<<endl;

    return 0;
}
