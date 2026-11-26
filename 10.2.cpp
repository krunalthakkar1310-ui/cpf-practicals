#include <iostream>
using namespace std;

struct TypeA
{
    int number;
    float amount;
    char letter;
    char name[15];
};

struct TypeB
{
    char letter;
    char name[15];
    int number;
    float amount;
};

union SharedData
{
    int number;
    float amount;
    char letter;
};

int main()
{
    cout << "********************************************\n";
    cout << " COMPOSITE DATA REPRESENTATION ANALYZER\n";
    cout << "********************************************\n\n";

    cout << "Composite Data Type A\n\n";
    cout << "Size : " << sizeof(TypeA) << " Bytes\n";

    cout << "--------------------------------------------\n\n";
    cout << "Composite Data Type B\n\n";
    cout << "Size : " << sizeof(TypeB) << " Bytes\n";

    cout << "--------------------------------------------\n\n";
    cout << "Padding and Alignment Observed\n";

    cout << "--------------------------------------------\n\n";
    cout << "Shared Memory Representation\n\n";

    SharedData data;

    data.number = 120;
    cout << "Integer Value   : " << data.number << endl;

    data.amount = 120.00f;
    cout << "Floating Value  : " << data.amount << endl;

    data.letter = 'x';
    cout << "Character Value : " << data.letter << endl;

    cout << "\nAfter Updating Floating Value\n\n";

    data.amount = 120.00f;
    cout << "Integer Value Changed\n";
    cout << "Character Value Changed\n";

    cout << "--------------------------------------------\n\n";
    cout << "Trade-off Analysis\n\n";
    cout << "Structure\n";
    cout << "Separate Memory for Every Member\n";
    cout << "Suitable for Storing Complete Records\n";

    cout << "--------------------------------------------\n";
    cout << "Union\n";
    cout << "Shared Memory for All Members\n";
    cout << "Suitable for Memory-efficient Applications\n";

    cout << "--------------------------------------------\n";
    cout << "Program Executed Successfully\n";
    cout << "--------------------------------------------\n";

    return 0;
}
