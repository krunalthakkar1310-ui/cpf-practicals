#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,n,marks;
    float avg,per,total=0;


    cout << "************************************************" << endl
         << "         STUDENT RECORD MANAGEMENT SYSTEM" << endl
         << "************************************************" << endl;
         cout << "\n";
         cout << "\n";
    cout << "Enter Number Of Subjects"<<setw(2)<<":";
    cin >>n;
    cout << "\n";
    cout << "\n";
    for(i=1;i<=n;i++)
    {
        cout << "Enter Marks of Subject"<<setw(2)<<i<<":";
        cin >>marks;
        total=total+marks;
        avg=total/n;
        per=total/n;
        cout <<"\n";
    }
    cout << "************************************************" << endl;
    cout << "\n";
    cout << "Academic Result";
    cout << "\n";
    cout << "************************************************" << endl;
    cout << "Total Marks"<<setw(7)<<":"<<total<<"\n";
    cout << "Average Marks"<<setw(5)<<":"<<avg<<"\n";
    cout << "Percentage"<<setw(8)<<":"<<per<<"%"<<"\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";

        if(per>=40)
        {
            cout<<"\nRESULT"<<setw(27)<<":  PASS"<<endl;



            if(per>=90 && per<=100)
            {
                cout<<"CLASS"<<setw(25)<<":  O"<<endl;
                cout<<"PERFROMANCE"<<setw(18)<<":  "<<"Outstanding"<<endl;
            }
            else if(per>=80 &&per<=90)
            {
                cout<<"CLASS"<<setw(25)<<":  A+"<<endl;
                cout<<"PERFROMANCE"<<setw(18)<<":  "<<"Excellent"<<endl;
            }


           else if(per>=70 &&per<=80)
            {
                cout<<"CLASS"<<setw(25)<<":  A"<<endl;
                cout<<"PERFROMANCE"<<setw(18)<<":  "<<"VERY GOOD"<<endl;
            }


            else if(per>=60 &&per<=70)
            {
                cout<<"CLASS"<<setw(25)<<":  B+"<<endl;
                cout<<"PERFROMANCE"<<setw(18)<<":  "<<"GOOD"<<endl;
            }

            else if(per>=50 &&per<=60)
            {
                cout<<"CLASS"<<setw(25)<<":  B"<<endl;
                cout<<"PERFROMANCE"<<setw(18)<<":  "<<"SATISFACTORY"<<endl;
            }


            else if(per>=40&&per<=50)
            {
                cout<<"CLASS"<<setw(25)<<":  C"<<endl;
                cout<<"PERFROMANCE"<<setw(18)<<":  "<<"NEEDS IMPROVEMENT"<<endl;
            }

            else if(per<=0)
            {
                cout<<"CLASS"<<setw(25)<<":  F"<<endl;
                cout<<"PERFROMANCE"<<setw(18)<<":  "<<"FAILED"<<endl;
            }

        }
        else
        {
            cout<<"\nRESULT"<<setw(27)<<":  FAIL"<<endl;
        }
        cout<<"\n";
        cout <<"------------------------------------------------"<<endl;


    return 0;
}









