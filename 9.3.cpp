#include <iostream>
using namespace std;

void showStackAndDynamicMemory()
{
    int localValue = 100;

    int* dynamicValue = new int;
    *dynamicValue = 250;

    cout << "--------------- Stack Memory ----------------\n\n";
    cout << "Local Variable Value : " << localValue << endl;
    cout << "Memory Address       : " << &localValue << endl;

    cout << "\n--------- Dynamically Allocated Memory ---------\n\n";
    cout << "Allocated Value      : " << *dynamicValue << endl;
    cout << "Memory Address       : " << dynamicValue << endl;

    delete dynamicValue;
    dynamicValue = nullptr;
}

int main()
{
    cout << "********************************************\n";
    cout << "      MEMORY ORGANIZATION ANALYZER\n";
    cout << "********************************************\n\n";

    showStackAndDynamicMemory();

    int originalValue = 50;
    int* firstPointer = &originalValue;
    int** secondPointer = &firstPointer;
    int*** thirdPointer = &secondPointer;

    cout << "\n----------- Multi-level Referencing ----------\n\n";
    cout << "Original Value                       : " << originalValue << endl;
    cout << "Single-level address stores          : " << firstPointer << endl;
    cout << "Double-level address stores           : " << secondPointer << endl;
    cout << "Triple-level address stores           : " << thirdPointer << endl;
    cout << "Value accessed through three levels   : "
         << ***thirdPointer << endl;

    cout << "\n--------------- Memory Safety ----------------\n\n";

    int* nullPointer = nullptr;
    if (nullPointer == nullptr)
        cout << "Null Reference      : Safe when not dereferenced\n";

    int* releasedPointer = new int(75);
    delete releasedPointer;
    releasedPointer = nullptr;

    cout << "Invalid Reference   : Memory released; pointer set to nullptr\n";

    int* uninitializedPointer;
    cout << "Uninitialized Pointer: Unsafe to access; not dereferenced\n";

    return 0;
}
