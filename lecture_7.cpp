#include <iostream>
using namespace std;
int main()
{
    short a = 32767;  // max value that is stored in a
    short b = -32768; // min value that is stored in b
    a += 1;
    b -= 1;
    cout << "the overlows:" << a << endl;
    cout << "the underflows:" << b << endl;
    double sum = 44444 + 33333;
    cout << "the sum is :" << sum << endl;

    return 0;
}