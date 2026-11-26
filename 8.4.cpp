#include <iostream>
using namespace std;

void printAsc(int n)
{
    if (n == 0)
        return;

    printAsc(n - 1);

    cout << n << " ";
}

void printDesc(int n)
{
    if (n == 0)
        return;

    cout << n << " ";

    printDesc(n - 1);
}

int reverseNum(int n, int rev)
{
    if (n == 0)
        return rev;

    return reverseNum(n / 10, rev * 10 + n % 10);
}

int sumDigits(int n)
{
    if (n == 0)
        return 0;

    return (n % 10) + sumDigits(n / 10);
}

void deciToBin(int n)
{
    if (n == 0)
        return;

    deciToBin(n / 2);

    cout << n % 2;
}

int main()
{
    int n, number, rev = 0, decimal;

    cout << "RECURSIVE UTILITY ANALYZER" << endl;

    cout << "PART A - RECURSIVE TRAVERSAL" << endl;

    cout << "Enter a positive integer N: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Please enter a positive integer.";
        return 0;
    }

    cout << "Numbers from 1 to " << n << ": ";
    printAsc(n);

    cout << endl;

    cout << "Numbers from " << n << " to 1: ";
    printDesc(n);

    cout << "PART B - RECURSIVE NUMBER PROCESSING" << endl;

    cout << "Enter a positive number: ";
    cin >> number;

    if (number < 0)
    {
        cout << "Please enter a positive number.";
        return 0;
    }

    cout << "Reverse of number: ";
    cout << reverseNum(number, rev) << endl;

    cout << "Sum of digits: ";
    cout << sumDigits(number) << endl;

    cout << "PART C - RECURSIVE NUMBER CONVERSION" << endl;

    cout << "Enter a decimal number: ";
    cin >> decimal;

    if (decimal < 0)
    {
        cout << "Please enter a non-negative number.";
        return 0;
    }

    cout << "Binary representation: ";

    if (decimal == 0)
        cout << 0;
    else
        deciToBin(decimal);

    cout << endl;

    cout << "PART D - COMPARATIVE ANALYSIS" << endl;

    cout << "1. Program Readability:" << endl;
    cout << "Recursive code is short and easy to understand." << endl;
    cout << "Iterative code uses loops." << endl;
    cout<<endl;

    cout << "2. Execution Flow:" << endl;
    cout << "Recursion uses repeated function calls." << endl;
    cout << "Iteration uses loops." << endl;
    cout<<endl;

    cout << "3. Number of Function Calls:" << endl;
    cout << "Recursion requires multiple function calls." << endl;
    cout << "Iteration generally uses fewer function calls." << endl;
    cout<<endl;

    cout << "4. Ease of Implementation:" << endl;
    cout << "Recursion requires a base condition." << endl;
    cout << "Iteration requires loop conditions." << endl;
    cout<<endl;

    return 0;
}
