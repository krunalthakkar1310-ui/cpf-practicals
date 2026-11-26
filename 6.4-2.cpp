#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n1,n2,a[20],b[20],c[30],i=0,temp=0;



    cout<<"\n************************************* ";
    cout<<"\n       Matrix Multiplication ";
    cout<<"\n*************************************";
    cout<<endl;
    cout<<endl;


    //Taking input from users.....
    cout<<"\nEnter Size of matrix 1 (1 Dimensional-Array) : ";
    cin>>n1;
    cout<<"\nEnter Size of matrix 2 (1 Dimensional-Array) : ";
    cin>>n2;

    if(n1<1 || n1>20 || n2<1 || n2>20 || n1+n2>30)
    {
        cout<<"Invalid sizes. Each array must be 1-20 elements and the combined size at most 30.\n";
        return 1;
    }



    cout<<endl;


    for(i=0; i<n1; i++)
    {
        cout<<"\nEnter "<<i+1<<" Element of Matrix  1  : ";
        cin>>a[i];
        cout<<endl;
    }


    cout<<endl;
    for(i=0; i<n2; i++)
    {
        cout<<"\nEnter "<<i+1<<" Element of Matrix  2  : ";
        cin>>b[i];
        cout<<endl;
    }

    cout<<endl;

//Printing both Matrices.....


    cout<<"First Matrix    : ";


    for(i=0; i<n1; i++)
    {

        cout<<a[i]<<" ";

    }
    cout<<endl;
    cout<<endl;
    cout<<"Second Matrix   : ";


    for(i=0; i<n2; i++)
    {

        cout<<b[i]<<" ";

    }
    cout<<endl;
    cout<<endl;

//combining Matrices...
    for(i=0; i<n1; i++)
    {
        c[i]=a[i];
    }


    for(i=0; i<n2; i++)
    {
        c[n1+i]=b[i];
    }


    cout<<endl;
    cout<<endl;

    int n=n1+n2;

    //Printing combined matrix......
    cout<<endl;
    cout<<"Merged Matrix  :  ";

    for(i=0; i<n; i++)
    {

        cout<<c[i]<<" ";

    }

//Sorting Matrix....
    for(i=0; i<n-1; i++)
    {
        for( int j=i; j<n; j++)

        {
            if( c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }

    //Printing Sorted matrix....

    cout<<endl;
    cout<<"Sorted Matrix  :  ";

    for(i=0; i<n; i++)
    {

        cout<<c[i]<<" ";

    }
    cout<<endl;
    cout<<endl;



    return 0;
}
