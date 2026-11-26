#include <iostream>
using namespace std;

// Global variable
int globalValue = 100;

// Function without parameter and without return value
void display()
{
    cout << "Function without parameter and return value" << endl;
}

// Function with parameter and without return value
void showNumber(int n)
{
    cout << "Number = " << n << endl;
}

// Function without parameter and with return value
int getNumber()
{
    return 50;
}

// Function with parameter and with return value
int add(int a, int b)
{
    return a + b;
}

// Call by value
void callByValue(int x)
{
    x = x + 10;
    cout << "Inside call by value = " << x << endl;
}

// Call by reference
void callByReference(int &x)
{
    x = x + 10;
    cout << "Inside call by reference = " << x << endl;
}

// Function demonstrating local and global scope
void scopeDemo()
{
    int localValue = 20;

    cout << "Local variable = " << localValue << endl;
    cout << "Global variable = " << globalValue << endl;
}

int main()
{
    int num = 10;

    cout << "1. Function Types" << endl;
    display();
    showNumber(25);
    cout << "Returned number = " << getNumber() << endl;
    cout << "Addition = " << add(10, 20) << endl;

    cout << "\n2. Call by Value" << endl;
    cout << "Before function = " << num << endl;
    callByValue(num);
    cout << "After function = " << num << endl;

    cout << "\n3. Call by Reference" << endl;
    cout << "Before function = " << num << endl;
    callByReference(num);
    cout << "After function = " << num << endl;

    cout << "\n4. Variable Scope" << endl;
    scopeDemo();

    return 0;
}
