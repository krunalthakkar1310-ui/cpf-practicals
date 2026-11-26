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
        for(j=1;j<=n-i;j++)
        {
            cout<< " ";
        }
        for(j=1;j<=i;j++)
        {
            cout <<j;
        }
        cout <<endl;
    }
    return 0;
}
