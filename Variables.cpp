#include <iostream>

using namespace std;

int main()
{
    // variable name can't start with a number

    // variables
    int var1 = 6;
    int var2 = 11;
    // variables value combined
    int var_total = var1 + var2;

    cout << "int1 value: " << var1 << endl;

    cout << "int2 value: " << var2 << endl;

    cout << "total value: " << var_total << endl;

    // wait for user output
    cin.get();

    cout << "variable value changed" << endl;

    cin.get();

    // changing the value of variable
    var1 = var1 + 1;

    cout << "int1 value: " << var1 << endl;

    cin.get();

    return 0;
}

