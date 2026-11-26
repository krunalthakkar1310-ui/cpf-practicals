#include<iostream>
using namespace std;
int main()
{
    short int i,j,k,n1,n2,n3,n4;
    int a[10][10],b[10][10],c[10][10];

    cout << "***********************************"<<endl;
    cout << "       MATRIX MULTIPLICATION       "<<endl;
    cout << "***********************************"<<endl;
    cout << endl;
    cout << endl;
    cout << "\nEnter Row Of Matrix 1 :";
    cin >> n1;
    cout << endl;
    cout << "\nEnter Column Of Matrix 1 :";
    cin >> n2;
    cout << endl;
    cout << "\nEnter Row Of Matrix 2 :";
    cin >> n3;
    cout << endl;
    cout << "\nEnter Column Of Matrix 2 :";
    cin >> n4;
    cout << endl;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            cout << "\nEnter "<<i+1<< "Element Of Matrix 1 :";
            cin >> a[i][j];
        }
    }
    for(i=0;i<n3;i++)
    {
        for(j=0;j<n4;j++)
        {
            cout << "\nEnter "<<i+1<< "Element Of Matrix 2 :";
            cin >> b[i][j];
        }
    }
    //Printing matrix...
    cout << "\nFirst Matrix :";
    cout << endl;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            cout <<a[i][j]<<" ";
        }
        cout <<endl;
    }
    cout << "\nSecond Matrix :";
    cout << endl;
    for(i=0;i<n3;i++)
    {
        for(j=0;j<n4;j++)
        {
            cout <<b[i][j]<<" ";
        }
        cout <<endl;
    }
    cout << "--------------------"<< endl;
    cout << endl;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            c[i][j]=0;
            for(k=0;k<n2;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];

            }
            cout << endl;
        }
    }
    cout << "\nMultiplication Matrix :"<<endl;
    for(i=0;i<n3;i++)
    {
        for(j=0;j<n4;j++)
        {
            cout <<c[i][j]<<" ";
        }
        cout <<endl;
    }










    return 0;
}
