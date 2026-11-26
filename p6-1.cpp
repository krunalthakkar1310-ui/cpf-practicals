#include<iostream>
using namespace std;
int main()
{
    int n,sc[50],T=0;
    string id[50],sn[50];
    short int i,j,temp;
    float A=0;


    cout << "********************************************\n";
    cout << "       SPORTS EVWNT SCORE ANALYSIS       \n";
    cout << "********************************************\n";
    cout << "\n";
    cout << "\n";
    cout << "Enter Number Of Participants   :";
    cin  >>n;
    cout << "\n";
    for (i=1;i<=n;i++)
    {
        cout << "Enter Participants Id   :";
        cin >>id[i];
        cout <<endl;
        cout << "Enter Participants Name   :";
        cin >>sn[i];
        cout <<endl;
        cout << "Enter Participants Score   :";
        cin >>sc[i];
        cout <<endl;
        T=T+sc[i];
        A=T/float(n);
    }
    cout << "-------------------------------------------\n";
    cout << "       Participants Performance        \n";
    cout << "-------------------------------------------\n";
    for(i=1;i<=n;i++)
    {
        cout << "ID     NAME     SCORE\n";
        cout <<""<<id[i]<<"     "<<sn[i]<<"      "<<sc[i]<<endl;
    }
    cout << "\n";
    cout << "Total Score    :"<<T<<endl;
    cout << "Average Score   :"<<A<<endl;
    for (i=0;i<=n-2;i++)
    {
        for (j=i+1;j<=n;j++)
        {
            if(sc[i]>sc[j])
            {
                temp[j]=sc[i];
                sc[j]=sc[i];
                sc[j]=temp[j]
            }
        }
    }












    return 0;
}
