#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
    string en,sn,sb,rf,fn,ln,ky;

    cout<<"\n************************************************";
    cout<<"\n       STUDENT RECORD MANAGEMENT SYSTEM";
    cout<<"\n************************************************"<<endl<<endl;

    cout<<"Enter Enrollment Number  : ";
    cin>>en;
    cin.ignore();
    cout<<"Enter Student Name      : ";
    getline(cin,sn);
    cout<<"Enter Student Branch    : ";
    cin>>sb;

    rf=sn+"-"+en;
    cout<<"\nStudent Reference  : "<<rf<<endl;

    size_t space=sn.find(' ');
    if(space==string::npos)
    {
        fn=sn;
        ln="";
    }
    else
    {
        fn=sn.substr(0,space);
        ln=sn.substr(space+1);
    }
    cout<<"First Name  : "<<fn<<endl;
    cout<<"Second Name : "<<ln<<endl;

    cout<<"\nEnter Keyword  : ";
    cin>>ky;
    if(sn.find(ky)!=string::npos)
        cout<<"Keyword Found.";
    else
        cout<<"Keyword Not Found.";

    cout<<"\n\nStudent report  : "<<endl;
    cout<<"Enrollment Number : "<<en<<endl;
    cout<<"Student Name : "<<sn<<endl;
    cout<<"Branch : "<<sb<<endl;
    return 0;
}
