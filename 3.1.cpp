#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
    string e1;
    string s1,b1;

    int s2;
    long long m1;

    int m;
    float m2;
    float p;


    cout <<"************************************************"<<endl<<
         "        STUDENT RECORD MANAGEMENT SYSTEM"<<endl<<
         "************************************************"<<endl;


    cout<<endl;
    cout<<endl;


    cout<<"Software Version"<<setw(10)<<"  1.2 ";


    cout<<endl;
    cout<<endl;


    cout<<"---------------------------------------------"<<endl<<
        "       STUDENT REGISTRATION"<<endl<<
        "---------------------------------------------"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\nEnter Enrollment Number"<<setw(3)<<":"<<"  ";
    cin>>e1;
    cin.ignore();
    cout<<"Enter Student Name"<<setw(8)<<":"<<"  ";
    getline(cin,s1);
    cout<<"Enter Branch"<<setw(14)<<":"<<"  ";
    cin>>b1;
    cout<<"Enter Semester"<<setw(12)<< ":"<< "  ";
    cin>>s2;
    cout<<"Enter Mobile Number"<<setw(7)<<":"<<"  ";
    cin>>m1;
    cout<<endl;
    cout<<endl;

    cout<<"---------------------------------------------"<<endl;
    cout<<endl;
    cout<<endl;

    cout<<"---------------------------------------------"<<endl<<
        "ACADEMIC INFORMATION"<<endl<<
        "---------------------------------------------"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Enter Your Total Marks"<<setw(6)<<":  ";
    cin>>m;
    cout<<"\n";
    cout<<"\n";

    m2=m/3.0f;
    p=m2;



    if(m<0 || m>300)

    {
        cout<<"ERROR"<<setw(19)<<":  Your Total Marks Must Be Between 0-300";
        cout<<"\n";
        cout<<"\n";
    }
    else
    {





        cout<<"\n";
        cout<<"\n";
        cout <<"************************************************"<<endl<<
             "        Academic Summary"<<endl<<
             "************************************************"<<endl;
        cout<<"\n";
        cout<<"\n";
        cout<<"\nTotal Marks"<<setw(17)<<":  "<<m<<endl;
        cout<<"Average Marks"<<setw(15)<<":  "<<m2<<endl;
        cout<<"Percentage"<<setw(18)<<":  "<<p<<"%"<<endl;
        cout<<"\n";
        cout<<"\n";



        cout<<"---------------------------------------------"<<endl<<
            "        STUDENT INFORMATION"<<endl<<
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
    }
    return 0;
}
