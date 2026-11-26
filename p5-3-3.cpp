#include<iostream>
using namespace std;
int main()
{
    int n;
    short int i,j;
    cout << "Enter Number Of Lines     :";
    cin  >>n;
    cout << endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<char(j+64);
        }
        cout <<endl;
    }
    return 0;
}
