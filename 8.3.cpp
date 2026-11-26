#include <iostream>
using namespace std;

// Factorial using a loop
int nfactIter(int n)
{
    int answer = 1;

    for (int i = 1; i <= n; i++)
    {
        answer = answer * i;
    }

    return answer;
}

// Factorial using recursion
int nfactRec(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return n * nfactRec(n - 1);
}

// Fibonacci series using a loop
void fibsIter(int n)
{
    int first = 0;
    int second = 1;

    for (int i = 0; i < n; i++)
    {
        cout << first << " ";
        int next = first + second;
        first = second;
        second = next;
    }

    cout << endl;
}

// Fibonacci number using recursion
int fibsRec(int n)
{
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    return fibsRec(n - 1) + fibsRec(n - 2);
}

// Fibonacci series using recursion
void fibs(int n, int i)
{
    if (i == n)
    {
        return;
    }

    cout << fibsRec(i) << " ";
    fibs(n, i + 1);
}

int main()
{
    int n;

    cout << "Enter a number for factorial (0 to 12): ";
    cin >> n;

    if (n < 0 || n > 12)
    {
        cout << "Enter a number from 0 to 12." << endl;
        return 0;
    }

    cout << "Factorial using loop: " << nfactIter(n) << endl;
    cout << "Factorial using recursion: " << nfactRec(n) << endl;

    cout << "\nEnter the number of Fibonacci terms (0 to 20): ";
    cin >> n;

    if (n < 0 || n > 20)
    {
        cout << "Enter a number from 0 to 20." << endl;
        return 0;
    }

    cout << "Fibonacci using loop: ";
    fibsIter(n);

    cout << "Fibonacci using recursion: ";
    fibs(n, 0);

    return 0;
}
