#include <iostream>
using namespace std;
int main()
{
    int num;
    int mul = 1;

    cout << "Enter your number: ";
    cin >> num;

    for( int i= 1; i<= num; i++)
    {
        mul = mul * i;
    }

    cout << "Factorial = " << mul;

    return 0;
}