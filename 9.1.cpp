#include <iostream>
using namespace std;

int main()
{
    int integerValue = 25;
    char characterValue = 'A';
    float floatingValue = 85.60f;

    cout << "********************************************\n";
    cout << "        MEMORY ADDRESS EXPLORER\n";
    cout << "********************************************\n\n";

    cout << "------------ Variable Information ------------\n\n";

    cout << "Integer Value      : " << integerValue << endl;
    cout << "Memory Address     : " << &integerValue << endl << endl;

    cout << "Character Value    : " << characterValue << endl;
    cout << "Memory Address     : " << &characterValue << endl << endl;

    cout << "Floating Value     : " << floatingValue << endl;
    cout << "Memory Address     : " << &floatingValue << endl;

    int* integerAddress = &integerValue;

    cout << "\n----------------------------------------------\n\n";
    cout << "Indirect Referencing\n\n";
    cout << "Stored Value       : " << *integerAddress << endl;

    *integerAddress = 30;

    cout << "Modified Value     : " << *integerAddress << endl;
    cout << "Updated Variable   : " << integerValue << endl;

    int numbers[5] = {10, 20, 30, 40, 50};

    cout << "\n----------------------------------------------\n\n";
    cout << "Sequential Data Collection\n\n";

    cout << "Array using Index\n\n";
    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << " ";
    }

    cout << "\n\nArray using Address-based Access\n\n";
    for (int i = 0; i < 5; i++)
    {
        cout << *(numbers + i) << " ";
    }

    cout << "\n\n----------------------------------------------\n\n";
    cout << "Observation\n\n";
    cout << "Both approaches access the same array elements.\n";

    return 0;
}
