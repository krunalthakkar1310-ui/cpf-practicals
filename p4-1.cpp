#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int total;
    float am;
    float percentage;
    cout << "Enter Your Total Marks"<<setw(1)<<":";
    cin >> total;
    cout << endl;
    cout<<endl;
    am= total/3.0;
    percentage=total/3.0;
    if (total<0 or total>300)
    {
        cout << "ERROR" <<setw(5)<<":"<< "Your Entered Marks Is Inappropriate";
        cout << endl;
        cout << endl;
    }
    else
    {

        cout <<"***************************************"<< endl;
        cout <<"   STUDENT RECORD MANAGEMENT SYSTEM   "<<endl;
        cout <<"***************************************"<<endl;
        cout <<endl;
        cout <<"----------------------------------------"<<endl;
        cout << "     ACADEMIC SUMMARY    "<<endl;
        cout <<"----------------------------------------"<<endl;
        cout << "Total Marks"<<setw(10)<<":"<<total<<endl;
        cout << "Average Marks"<<setw(8)<<":"<<am<<endl;
        cout << "Percentage"<<setw(11)<<":"<<percentage<< "%" <<endl;



    cout << "----------------------------------------"<<endl;
    cout << "    ACADEMIC RESULT   "<<endl;
    cout << "----------------------------------------"<<endl;
    cout <<endl;
    if (percentage>40)
    {
        cout << "RESULT"<<setw(15)<<":"<< "PASS"<<endl;
    }
    else
    {
        cout << "RESULT"<<setw(15)<<":"<< "FAIL"<<endl;
    }
    if (percentage>90)
    {
        cout << "GRADE"<<setw(16)<<":"<< "O"<<endl;
        cout << "PERFORMANCE"<<setw(10)<<":"<<"Outstanding"<<endl;
    }
    else if (percentage>80)
    {
        cout << "GRADE"<<setw(16)<<":"<< "A+"<<endl;
        cout << "PERFORMANCE"<<setw(10)<<":"<<"Excellent"<<endl;
    }
    else if (percentage>70)
    {
        cout << "GRADE"<<setw(16)<<":"<< "A"<<endl;
        cout << "PERFORMANCE"<<setw(10)<<":"<<"Very Good"<<endl;
    }
    else if (percentage>60)
    {
        cout << "GRADE"<<setw(16)<<":"<< "B+"<<endl;
        cout << "PERFORMANCE"<<setw(10)<<":"<<"Good"<<endl;
    }
    else if(percentage>50)
    {
        cout << "GRADE"<<setw(16)<<":"<< "B"<<endl;
        cout << "PERFORMANCE"<<setw(10)<<":"<<"Satisfactory"<<endl;
    }
    }
}





















